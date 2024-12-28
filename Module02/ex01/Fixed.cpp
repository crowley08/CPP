/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:56:42 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 11:08:48 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int const	Fixed::_bits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ): _value(src._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src._value;
	return ;
}

Fixed::Fixed( float const f ): _value(f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << _bits));
	return ;
}

Fixed::Fixed( int const i ): _value(i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << _bits;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
	{
		std::cout << "Copy assignement operator called" << std::endl;
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return (o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
float	Fixed::toFloat( void ) const
{
	return (float)this->_value / (float)(1 << _bits);
}

int	Fixed::toInt( void ) const
{
	return ( this->_value >> _bits );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
		return ( this->_value );
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

/* ************************************************************************** */