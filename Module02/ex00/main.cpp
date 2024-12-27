/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:47:19 by saandria          #+#    #+#             */
/*   Updated: 2024/12/27 13:11:15 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int	main( void )
{
	{
		Fixed a;
		Fixed b( a );
		Fixed c;

		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << "**********************************************" << std::endl;
	{
		Fixed a;
		Fixed b( a );
		Fixed c( b);
		Fixed d;

		d = c;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
		std::cout << d.getRawBits() << std::endl;
	}
	return (0); 
}
