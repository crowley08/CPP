/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:05:21 by saandria          #+#    #+#             */
/*   Updated: 2025/01/11 10:39:52 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include <iostream>
# include <string>
# include "FragTrap.Class.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( std::string name );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void	whoAmI( void ) const;
		void	attack( std::string const& target );
		
		std::string	getName( void ) const;

	private:

		std::string	_name;

};

#endif /* ***************************************************** DIAMONDTRAP_CLASS_H */