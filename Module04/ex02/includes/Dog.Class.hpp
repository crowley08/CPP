/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:42:27 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 13:47:48 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"
# include "Brain.Class.hpp"

class Dog : virtual public AAnimal
{

	public:

		Dog();
		Dog( Dog const& src );
		~Dog();

		Dog&		operator=( Dog const& rhs );

		void	makeSound( void ) const;

	private:
	
		Brain*	_brain;

};

#endif /* ************************************************************* DOG_CLASS_H */