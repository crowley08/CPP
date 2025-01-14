/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:18:02 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:18:17 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class WrongAnimal
{
	protected:
	
		std::string	_type;

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const& src );
		virtual ~WrongAnimal();

		WrongAnimal&		operator=( WrongAnimal const& rhs );

		void	setType( std::string type );
		std::string	getType( void ) const;

		virtual void	makeSound( void ) const;

	private:

};

#endif /* ********************************************************** WRONGANIMAL_CLASS_H */