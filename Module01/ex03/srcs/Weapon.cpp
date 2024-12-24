/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:48:17 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 11:26:55 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.Class.hpp"

Weapon::Weapon( void )
{
	return ;
}

Weapon::Weapon( std::string type ): _type(type)
{
	return ;
}

Weapon::~Weapon (void)
{
	return ;
}

std::string	Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
