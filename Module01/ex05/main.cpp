/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:25:32 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 14:17:10 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Class.hpp"

int	main( void )
{
	Harl	harl;

	harl.complain( "warning" );
	harl.complain( "info" );
	harl.complain( "debug" );
	harl.complain( "error" );
	harl.complain( "4213wqf" );
	harl.complain( "leo be" );
	return (0);
}
