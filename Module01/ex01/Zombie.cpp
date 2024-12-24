/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:39:40 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 10:06:50 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

Zombie::Zombie( void )
{
	std::cout << "Zombie in da place!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie died!" << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name; 
}

