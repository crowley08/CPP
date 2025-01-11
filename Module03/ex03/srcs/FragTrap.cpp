/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:28:23 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:46:49 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.Class.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setName("default");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap constructor with name(" << name << ") called"<< std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap( src.getName() )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destructed" << std::endl;
    return ;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::attack( std::string const& target )
{
	if (this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " has no enough point to attack..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;
	return ;
}

void	FragTrap::highFiveGuys( void ) const
{
	std::cout << "high five, my friend, you're awesome :D" << std::endl;
}
