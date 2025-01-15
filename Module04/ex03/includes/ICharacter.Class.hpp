/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.Class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:54:08 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 12:20:13 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

# include <iostream>
# include <string>
# include "AMateria.Class.hpp"

class AMateria;

class ICharacter
{

	public:

		virtual ~ICharacter();
		virtual std::string const&	getName() const = 0;
		virtual void	equip( AMateria* m ) = 0;
		virtual void	unEquip( int idx ) = 0;
		virtual void	use( int idx, ICharacter& target ) = 0;

};

#endif /* ****************************************************** ICHARACTER_CLASS_H */