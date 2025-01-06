/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:44:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/06 10:08:14 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

int	main( void )
{
	ClapTrap    trap0;
	ClapTrap	trap1( "fana" );
	ClapTrap	trap2( trap1 );

	trap0.attack( "fana" );
	return (0);
}
