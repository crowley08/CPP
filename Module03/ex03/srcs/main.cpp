/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:44:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/18 13:39:54 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.Class.hpp"

int	main( void )
{
	{
		DiamondTrap	trap( "fana" );

		std::cout << "HitPoints: " << trap.getHitPoint() << std::endl;
		std::cout << "EnergyPoints: " << trap.getEnergyPoint() << std::endl;
		std::cout << "AttackDamage: " << trap.getAttackDamage() << std::endl;
		trap.attack( "Sanda" );
		trap.highFiveGuys();
		trap.whoAmI();
	}
	return (0);
}
