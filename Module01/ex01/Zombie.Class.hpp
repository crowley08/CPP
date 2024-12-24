/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:36:18 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 10:06:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H

# define ZOMBIE_CLASS_H

# include <iostream>

class	Zombie
{
	private:
	
		std::string	_name;

	public:
	
		Zombie( void );
		~Zombie( void );
		Zombie*	zombieHorde( int N, std::string name );
		void	setName( std::string name);
};

#endif