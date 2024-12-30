/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:47:19 by saandria          #+#    #+#             */
/*   Updated: 2024/12/30 08:28:06 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"
#include "Point.Class.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main()
{
	Point a( 0, 5.0f);
	Point b( 1.0f, 3.0f);
	Point c(2.0f, 7.0f);
	Point x(1.0f, 9.0f);

	if (bsp (a, b , c, x) == true)
		std::cout << "X belongs to triangle ABC" << std::endl;
	else
		std::cout << "X doesn't belong to triangle ABC" << std::endl;
	return ( 0 );
}
