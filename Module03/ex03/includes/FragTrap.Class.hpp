/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:27:52 by saandria          #+#    #+#             */
/*   Updated: 2025/01/11 10:03:39 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>
# include <string>
#include "ScavTrap.Class.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap( std::string name);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void	attack( std::string const& target );
		void	highFiveGuys( void ) const;

	private:

};

#endif /* ******************************************************** FRAGTRAP_CLASS_H */