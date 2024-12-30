/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:21:17 by saandria          #+#    #+#             */
/*   Updated: 2024/12/30 08:30:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.Class.hpp"

Fixed	calcArea(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;
	return (area);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	Apab = calcArea(point, a, b);
	Fixed	Apbc = calcArea(point, b, c);
	Fixed	Apca = calcArea(point, c, a);
	
	if (Apab < 0 || Apbc < 0 || Apca < 0)
	    return (false);
	return (true);
}
