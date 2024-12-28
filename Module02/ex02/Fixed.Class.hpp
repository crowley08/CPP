/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:56:54 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 11:50:35 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( float const f );
		Fixed( int const i );
		~Fixed();

		Fixed &	operator=( Fixed const & rhs );
		
		//arithmetic operators
		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;

		//comparison operators
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		
		//increment and decrement operators
		Fixed & operator++( void );
		Fixed & operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		
		//max and min
		static Fixed &	min( Fixed & a, Fixed & b);
		static Fixed &	max( Fixed & a, Fixed & b);	
		static Fixed const &	min( Fixed const & a, Fixed const & b);	
		static Fixed const &	max( Fixed const & a, Fixed const & b);	
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
	    int	_value;
		static int const	_bits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & fp );

#endif /* *********************************************************** FIXED_H */