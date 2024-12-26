/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:51:29 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:56:53 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int	main( void )
{
	Zombie	*zombie = NULL;

	zombie = zombie->newZombie( "fana" );
	delete zombie;
	zombie->randomChump( "faniry" );
	return (0);
}
