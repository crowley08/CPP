/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:44:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/11 10:28:03 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.Class.hpp"

int	main( void )
{
	{
		DiamondTrap	trap( "fana" );

		trap.attack( "Sanda" );
		trap.highFiveGuys();
		trap.whoAmI();
	}
	return (0);
}
