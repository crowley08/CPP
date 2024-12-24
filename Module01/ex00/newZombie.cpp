/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:56:10 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 09:01:13 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

Zombie	*Zombie::newZombie( std::string name )
{
	Zombie	*newZombie = NULL;

	newZombie = new Zombie( name );
	newZombie->_announce();
	return (newZombie);
}
