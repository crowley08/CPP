/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:33:07 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 12:19:49 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.Class.hpp"

class Character : virtual public ICharacter
{

	public:

		Character();
		Character( std::string const& name );
		Character( Character const& src );
		~Character();

		Character&		operator=( Character const& rhs );

		std::string const&	getName() const;
		void	equip( AMateria* m );
		void	unEquip( int idx );
		void	use( int idx, ICharacter& target );


	private:

		AMateria*	_inventory[4];
		std::string	_name;

};

#endif /* ******************************************************* CHARACTER_CLASS_H */