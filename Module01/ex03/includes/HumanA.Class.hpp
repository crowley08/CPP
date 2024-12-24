/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 10:52:36 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 11:31:59 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H

# define HUMANA_CLASS_H

# include "Weapon.Class.hpp"

class	HumanA
{
	public:

		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );

	private:

		std::string	_name;
		Weapon		*_weapon;	
};

#endif