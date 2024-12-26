/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:25:32 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:14:11 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Class.hpp"

int	main( int argc, char **argv )
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./harlfilter <complain>" << std::endl;
	    return (1);
	}
	harl.complain((std::string)argv[1]);
	return (0);
}
