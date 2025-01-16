/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:52 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 13:48:09 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->_brain = new Brain();
	this->setType( "Cat" );
}

Cat::Cat( const Cat& src ) : AAnimal(src)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat::~Cat()
{
	if (this->_brain)
		delete(this->_brain);
	std::cout << "Cat destructor" << std::endl;
}

Cat&				Cat::operator=( Cat const& rhs )
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

void	Cat::makeSound( void ) const
{
	std::cout << "MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW MEOW" << std::endl;
}
