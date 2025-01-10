/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:44:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:45:30 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.Class.hpp"

int	main( void )
{
	ClapTrap    trap0( "sanda" );
	ClapTrap	trap1( "fana" );
	ClapTrap	trap2( trap0 );

	trap0.attack( "fana" );
	trap1.takeDamage( 1 );
	trap1.beRepaired( 1 );
	trap2.attack( "fana" );
	trap1.attack( "sanda" );
	trap1.takeDamage( 1 );
	trap0.takeDamage( 1 );
	trap0.beRepaired( 5 );
	trap1.beRepaired( 3 );
	return (0);
}
