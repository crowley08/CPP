/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:00:26 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 10:48:00 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class Ice : virtual public AMateria
{

	public:

		Ice();
		Ice( Ice const& src );
		~Ice();

		Ice&		operator=( Ice const& rhs );

		AMateria*	clone( void ) const;
		void	use(ICharacter& target);

	private:

};

#endif /* ************************************************************* ICE_CLASS_H */