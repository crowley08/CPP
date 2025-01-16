/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:52 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:02:04 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

WrongCat::WrongCat()
{
	this->setType( "WrongCat" );
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src )
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat&				WrongCat::operator=( WrongCat const& rhs )
{
	if ( this != &rhs )
	{
		this->setType( rhs.getType() );
	}
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG MEOWRONG" << std::endl;
}
