/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:40:11 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:00:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal& src )
{
	std::cout << "Animal copy constructor" << std::endl;
    *this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal&				Animal::operator=( Animal const& rhs )
{
	if ( this != &rhs )
	{
		this->setType( rhs.getType() );
	}
	return *this;
}

void	Animal::setType( std::string type )
{
	this->_type = type;
}

std::string	Animal::getType() const
{
	return ( this->_type );
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal make sound" << std::endl;
}
