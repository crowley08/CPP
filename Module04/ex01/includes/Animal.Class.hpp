/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:29:29 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:12:07 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class Animal
{
	protected:
	
		std::string	_type;

	public:

		Animal();
		Animal( Animal const& src );
		virtual ~Animal();

		Animal&		operator=( Animal const& rhs );

		void	setType( std::string type );
		std::string	getType( void ) const;

		virtual void	makeSound( void ) const;

	private:

};

#endif /* ********************************************************** ANIMAL_CLASS_H */