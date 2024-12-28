/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:47:19 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 13:26:17 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"
#include "Point.Class.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main()
{
	Point a( 0, 5.0f);
	Point b( 0, 5.0f);
	Point c(0, 0);
	Point x(0.0f, 0.0f);

	std::cout << bsp(a, b, c, x) << std::endl;
}
