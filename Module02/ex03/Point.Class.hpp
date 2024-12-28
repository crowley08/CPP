/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:12:13 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 13:18:42 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

# include <iostream>
# include <string>

# include "Fixed.Class.hpp"

class Point
{

	public:

		Point();
		Point( Point const& src );
		Point( float const x, float const y );
		~Point();

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;

		Point&	operator=( Point const& rhs );

	private:

		Fixed	_x;
		Fixed	_y;
};

std::ostream&	operator<<( std::ostream& o, Point const& i );

#endif /* *********************************************************** POINT_H */