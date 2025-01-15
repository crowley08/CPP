/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:43:09 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 12:21:06 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <string>
# include "ICharacter.Class.hpp"

class ICharacter;

class AMateria
{
	protected:

		std::string	_type;

	public:

		AMateria();
		AMateria( std::string const& type );
		AMateria( AMateria const& src );
		virtual ~AMateria();

		AMateria&		operator=( AMateria const& rhs );
		
		std::string const&	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
		
	private:

};

#endif /* ******************************************************** AMATERIA_CLASS_H */