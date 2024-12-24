/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:51:29 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 10:07:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

int	main( void )
{
	Zombie	*zombies = NULL;

	zombies = zombies->zombieHorde( 50, "fana");
	delete[] (zombies);
}
