/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:43:32 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 11:28:38 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H

# define WEAPON_CLASS_H

# include <iostream>

class	Weapon
{
	public:

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		std::string	getType( void ) const;
		void	setType( std::string type );

	private:

		std::string	_type;

};

#endif