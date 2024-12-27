/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:56:42 by saandria          #+#    #+#             */
/*   Updated: 2024/12/27 13:07:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"

int const	Fixed::_bits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Fixed const & i )
// {
// 	o << "Value = " << i.getRawBits();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
		return ( this->_rawBits );
}

void	Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}

/* ************************************************************************** */