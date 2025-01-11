/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:05:42 by saandria          #+#    #+#             */
/*   Updated: 2025/01/11 10:40:52 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), _name( name )
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap with name(" << name << ")constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap( src ), FragTrap( src ), ScavTrap( src )
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " destructed!" << std::endl;
}

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setName( rhs.getName() );
		this->setHitPoints( rhs.getHitPoint() );
		this->setEnergyPoints( rhs.getEnergyPoint() );
		this->setAttackDamage( rhs.getAttackDamage() );
	}
	return *this;
}

std::string DiamondTrap::getName() const
{
	return this->_name;
}

void	DiamondTrap::attack( std::string const& target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "I'm " << this->getName() << ", and my ClapTrap's name is " << ClapTrap::_name << "." << std::endl;
}
