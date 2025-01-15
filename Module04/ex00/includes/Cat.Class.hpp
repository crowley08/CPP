/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:35 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:48:21 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"

class Cat : virtual public Animal
{

	public:

		Cat();
		Cat( Cat const& src );
		~Cat();

		Cat&		operator=( Cat const& rhs );

		void	makeSound( void ) const;

	private:

};

#endif /* ************************************************************* CAT_CLASS_H */