/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:31:32 by saandria          #+#    #+#             */
/*   Updated: 2025/01/10 13:12:02 by saandria         ###   ########.fr       */
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

		void	setName( std::string name );
		void    setHitPoints( int hitPoints );
		void    setEnergyPoints( int energyPoints );
		void    setAttackDamage( int attackDamage );

	protected:
	
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

};

#endif /* ************************************************** CLAPTRAP_CLASS_H */