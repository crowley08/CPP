/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:43:33 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:11:57 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor with name(" << name << ") called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const& rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoint();
		this->_hitPoints = rhs.getHitPoint();
	}
	return *this;
}

void	ClapTrap::attack( std::string const& target )
{
	if (this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "Claptrap " << this->getName() << " has no enough point to attack..." << std::endl;
		return ;
	}
	std::cout << "Claptrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "Claptrap " << this->getName() << " has no enough point to repair itself..." << std::endl;
		return ;
	}
	int	tmp = this->getHitPoint() + amount;
	if (tmp > 10)
		this->_hitPoints = 10;
	this->_hitPoints += amount;
	std::cout << "Claptrap " << this->getName() << " got " << amount << " hitpoint(s)!"<< std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount;
	std::cout << "Claptrap " << this->getName() << " take " << amount << " damage!"<< std::endl;
}

std::string	ClapTrap::getName() const
{
	return this->_name;
}

int	ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

int	ClapTrap::getEnergyPoint() const
{
	return this->_energyPoints;
}

int	ClapTrap::getHitPoint() const
{
	return this->_hitPoints;
}

void	ClapTrap::setName( std::string name )
{
    this->_name = name;
}

void    ClapTrap::setHitPoints( int hitPoints )
{
	this->_hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints( int energyPoints )
{
	this->_energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage( int attackDamage )
{
	this->_attackDamage = attackDamage;
}
