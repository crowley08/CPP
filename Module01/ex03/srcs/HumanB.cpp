/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:12:51 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 14:05:56 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.Class.hpp"

HumanB::HumanB( std::string name ): _weapon(NULL),  _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void )
{
    if (!this->_weapon)
	{
		std::cout << this->_name << " has no weapon!" << std::endl;
		return ;
	}	
	Weapon	weaponTmp = *_weapon;
	std::cout << this->_name << " attack with their " << weaponTmp.getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}
