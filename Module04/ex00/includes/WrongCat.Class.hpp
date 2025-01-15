/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:35 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:12:04 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class WrongCat : virtual public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const& src );
		~WrongCat();

		WrongCat&		operator=( WrongCat const& rhs );

		void	makeSound( void ) const;

	private:

};

#endif /* ************************************************************* WRONGCAT_CLASS_H */