/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:46:07 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 13:48:37 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->_brain = new Brain();
	this->setType( "Dog" );
}

Dog::Dog( const Dog& src ) : AAnimal( src )
{
	std::cout << "Dog copy constructor" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog::~Dog()
{
	if (this->_brain)
		delete(this->_brain);
	std::cout << "Dog destructor" << std::endl;
}

Dog&				Dog::operator=( Dog const& rhs )
{
	if ( this != &rhs )
	{
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
		this->setType( rhs.getType() );
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF WOOF" << std::endl;
}
