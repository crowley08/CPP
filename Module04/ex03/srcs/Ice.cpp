/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:03:22 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:07:45 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.Class.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice( const Ice & src )
{
	std::cout << "Ice copy constructor" << std::endl;
    *this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice();
	
	return (clone);
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
