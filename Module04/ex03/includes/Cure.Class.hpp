/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:00:26 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:11:47 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class Cure : virtual public AMateria
{

	public:

		Cure();
		Cure( Cure const& src );
		~Cure();

		Cure&		operator=( Cure const& rhs );

		AMateria*	clone( void ) const;
		void	use(ICharacter& target);

	private:

};

#endif /* ************************************************************* CURE_CLASS_H */