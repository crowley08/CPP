/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:18:40 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:33:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=( WrongAnimal const& rhs )
{
	if ( this != &rhs )
	{
		this->setType( rhs.getType() );
	}
	return *this;
}

void	WrongAnimal::setType( std::string type )
{
	this->_type = type;
}

std::string	WrongAnimal::getType() const
{
	return ( this->_type );
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WRONG WRONG WRONG WRONG WRONG WRONG WRONG WRONG WRONG WRONG" << std::endl;
}
