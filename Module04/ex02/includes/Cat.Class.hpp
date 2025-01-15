/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:52:35 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:52:11 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include <string>
# include "header.h"
# include "Brain.Class.hpp"

class Cat : virtual public AAnimal
{

	public:

		Cat();
		Cat( Cat const& src );
		~Cat();

		Cat&		operator=( Cat const& rhs );

		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif /* ************************************************************* CAT_CLASS_H */