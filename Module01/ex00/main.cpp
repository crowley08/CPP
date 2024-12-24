/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:51:29 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 09:01:29 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int	main( void )
{
	Zombie	*zombie = NULL;

	zombie = zombie->newZombie( "fana" );
	zombie->randomChump( "faniry" );
	delete zombie;
}
