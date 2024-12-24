/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:39:40 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 09:02:09 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << "Zombie " << name << " in da place!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->_name << " died!" << std::endl;
}

void	Zombie::_announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
