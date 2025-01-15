/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:03:22 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:12:49 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.Class.hpp"

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure copy constructor" << std::endl;
    *this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure();
	
	return (clone);
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
