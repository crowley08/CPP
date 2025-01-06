/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:43:33 by saandria          #+#    #+#             */
/*   Updated: 2025/01/06 14:52:37 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

ClapTrap::ClapTrap(): _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
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
	std::cout << "ClapTrap constructor with name called" << std::endl;
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

// std::ostream&	operator<<( std::ostream& o, ClapTrap const& i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

void	ClapTrap::attack( std::string const& target )
{
	std::cout << "Claptrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;
	this->_hitPoints--;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_energyPoints -= amount;
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
