/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:46:07 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:02:35 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Dog::Dog()
{
	this->setType( "Dog" );
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog( const Dog& src )
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog&				Dog::operator=( Dog const& rhs )
{
	if ( this != &rhs )
	{
		this->setType( rhs.getType() );
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF" << std::endl;
}
