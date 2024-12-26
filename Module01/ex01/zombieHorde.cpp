/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 09:10:35 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:33:43 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	int	i = -1;
	Zombie	*zombies = new Zombie[N];

	while (++i < N)
	{
	    zombies[i].setName(name);
		zombies[i]._announce();
	}
	return (zombies);
}
