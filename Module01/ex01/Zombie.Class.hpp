/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:36:18 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:33:02 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H

# define ZOMBIE_CLASS_H

# include <iostream>

class	Zombie
{
	public:
	
		Zombie( void );
		~Zombie( void );
		Zombie*	zombieHorde( int N, std::string name );
		void	setName( std::string name);

	private:
	
		std::string	_name;
		void	_announce( void );

};

#endif