/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 08:36:18 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 08:46:35 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H

# define ZOMBIE_CLASS_H

# include <iostream>

class	Zombie
{
	private:
	
		std::string	_name;
		void	_announce( void );

	public:
	
		Zombie( std::string name );
		~Zombie( void );
		Zombie	*newZombie( std::string name );
		void	randomChump( std::string name );
		
};

#endif