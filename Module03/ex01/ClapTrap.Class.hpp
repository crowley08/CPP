/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:31:32 by saandria          #+#    #+#             */
/*   Updated: 2025/01/07 15:25:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const& src );
		ClapTrap ( std::string name);
		~ClapTrap();

		ClapTrap&	operator=( ClapTrap const& rhs );

		void	attack( std::string const& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
		std::string	getName( void ) const;
		int	getAttackDamage( void ) const;
		int	getEnergyPoint( void ) const;
		int	getHitPoint( void ) const;

	private:
	
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

};

// std::ostream&	operator<<( std::ostream& o, ClapTrap const& i );

#endif /* ************************************************** CLAPTRAP_CLASS_H */