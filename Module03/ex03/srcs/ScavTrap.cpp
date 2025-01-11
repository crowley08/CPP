/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:17:23 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:47:05 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.Class.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap constructor with name(" << name << ") called"<< std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap( src.getName() )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
    return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destructed" << std::endl;
    return ;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setName( rhs.getName() );
		this->setAttackDamage( rhs.getAttackDamage() );
		this->setEnergyPoints( rhs.getEnergyPoint() );
		this->setHitPoints( rhs.getHitPoint() );
	}
	return *this;
}

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->getName() << " enter in Gate keeper mode!" << std::endl;	
}

void	ScavTrap::attack( std::string const& target )
{
	if (this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no enough point to attack..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;
	return ;
}
