/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:56:42 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 12:23:24 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed(): _value(0) {}

Fixed::Fixed( Fixed const& src )
{
	*this = src;
	return ;
}

Fixed::Fixed( float const f )
{
	this->_value = roundf(f * (1 << _bits));
	return ;
}

Fixed::Fixed( int const i )
{
	this->_value = i << _bits;
	return ;
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=( Fixed const& rhs )
{
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream& o, Fixed const& i )
{
	o << i.toFloat();
	return (o);
}

float	Fixed::toFloat( void ) const
{
	return (float)this->_value / (float)(1 << _bits);
}

int	Fixed::toInt( void ) const
{
	return ( this->_value >> _bits );
}

int	Fixed::getRawBits( void ) const
{
	return ( this->_value );
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

bool	Fixed::operator==( const Fixed& rhs ) const
{
	return ( this->_value == rhs.getRawBits() );
}

bool	Fixed::operator!=( const Fixed& rhs ) const
{
	return ( this->_value != rhs.getRawBits() );
}

bool	Fixed::operator<=( const Fixed& rhs ) const
{
	return ( this->_value <= rhs.getRawBits() );
}

bool	Fixed::operator>=( const Fixed& rhs ) const
{
	return ( this->_value >= rhs.getRawBits() );
}

bool	Fixed::operator<( const Fixed& rhs ) const
{
	return ( this->_value < rhs.getRawBits() );
}

bool	Fixed::operator>( const Fixed& rhs ) const
{
	return ( this->_value > rhs.getRawBits() );
}

Fixed	Fixed::operator+( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++( void )
{
	this->_value++;
	return ( *this );
}

Fixed&	Fixed::operator--( void )
{
	this->_value--;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp( *this );

	operator++();
	return ( tmp );
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp( *this );

	operator--();
	return ( tmp );
}

Fixed&	Fixed::min( Fixed& a, Fixed& b )
{
	if ( a < b )
		return ( a );
	return ( b );
}

Fixed&	Fixed::max( Fixed& a, Fixed& b )
{
	if ( a < b )
		return ( b );
	return ( a );
}

Fixed const&	Fixed::min( Fixed const& a, Fixed const& b )
{
	if ( a < b )
		return ( a );
	return ( b );
}

Fixed const&	Fixed::max( Fixed const& a, Fixed const& b )
{
	if ( a < b )
		return ( b );
	return ( a );
}
