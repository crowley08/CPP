/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:00:10 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 11:34:13 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.Class.hpp"

HumanA::HumanA(std::string name, Weapon& weapon ): _name(name),  _weapon(&weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void )
{
	Weapon	weaponTmp = *_weapon;
	
	std::cout << this->_name <<" attack with their " << weaponTmp.getType() << std::endl;
}
