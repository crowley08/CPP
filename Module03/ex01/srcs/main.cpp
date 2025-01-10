/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:44:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:46:19 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.Class.hpp"

int	main( void )
{
	{		
		ScavTrap    trap0( "sanda" );
		ClapTrap	trap1( "fana" );
		ClapTrap	trap2( trap0 );
		ScavTrap	trap3( "adala");

		trap3.guardGate();
		trap0.attack( "fana" );
		trap1.takeDamage( trap0.getAttackDamage() );
		trap1.beRepaired( 21 );
		trap2.attack( "fana" );
		trap1.attack( "sanda" );
		trap1.takeDamage( trap2.getAttackDamage() );
		trap0.takeDamage( trap1.getAttackDamage() );
		trap0.beRepaired( 5 );
		trap1.beRepaired( 3 );
	}
	std::cout << std::endl << "####################################################" << std::endl << std::endl;
	{
		ScavTrap	trap( "Sanda" );

		trap.attack( "fana" );
		trap.guardGate();
	}
	return (0);
}
