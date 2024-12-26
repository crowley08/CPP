/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:51:29 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 14:10:01 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int	main( void )
{
	{		
		Zombie	*zombies = NULL;

		zombies = zombies->zombieHorde( 25, "fana");
		delete[] (zombies);
	}
	{
		Zombie	*zombies = NULL;

		zombies = zombies->zombieHorde( 10, "mikaia");
		delete[] (zombies);
	}
	{
		Zombie	*zombies = NULL;

		zombies = zombies->zombieHorde( -1, "faniry");
		delete[] (zombies);
	}
	{
		Zombie	*zombies = NULL;

		zombies = zombies->zombieHorde( 0, "hosea");
		delete[] (zombies);
	}
	return (0);
}
