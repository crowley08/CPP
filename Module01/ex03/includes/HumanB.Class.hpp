/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 11:09:31 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 11:32:04 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H

# define HUMANB_CLASS_H

# include "../includes/Weapon.Class.hpp"

class	HumanB
{
	public:

		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon& weapon );

	private:
	
		Weapon		*_weapon;
		std::string	_name;

};

#endif