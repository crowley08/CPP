/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:48:01 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 15:40:44 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.Class.hpp"

AMateria::AMateria() : _type("materia")
{
}

AMateria::AMateria( std::string const& type ) : _type(type)
{
}

AMateria::AMateria( const AMateria & src )
{
    *this = src;
}

AMateria::~AMateria()
{
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::string const&	AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "* Launches a " << this->getType() << " at " << target.getName() << " *" << std::endl;
}