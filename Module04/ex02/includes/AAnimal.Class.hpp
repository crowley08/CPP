/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:29:29 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 14:28:28 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class AAnimal
{
	protected:
	
		std::string	_type;

	public:

		AAnimal();
		AAnimal( AAnimal const& src );
		virtual ~AAnimal();

		AAnimal&		operator=( AAnimal const& rhs );

		void	setType( std::string type );
		std::string	getType( void ) const;

		virtual void	makeSound( void ) const = 0;

	private:

};

#endif /* ********************************************************** ANIMAL_CLASS_H */