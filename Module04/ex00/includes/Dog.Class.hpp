/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:42:27 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:12:03 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class Dog : virtual public Animal
{

	public:

		Dog();
		Dog( Dog const& src );
		virtual ~Dog();

		Dog&		operator=( Dog const& rhs );

		void	makeSound( void ) const;

	private:

};

#endif /* ************************************************************* DOG_CLASS_H */