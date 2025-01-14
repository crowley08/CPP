/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:52 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 12:56:14 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->_brain = new Brain();
	this->setType( "Cat" );
}

Cat::Cat( const Cat& src )
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	delete(this->_brain);
	std::cout << "Cat destructor" << std::endl;
}

Cat&				Cat::operator=( Cat const& rhs )
{
	if ( this != &rhs )
	{
		this->_brain = rhs._brain;
		this->setType( rhs.getType() );
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW" << std::endl;
}
