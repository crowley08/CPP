/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:26:38 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 11:53:47 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H

# define HARL_CLASS_H

# include <string>
# include <iostream>

class	Harl
{
	public:

		Harl( void );
		~Harl( void );
		void	complain( std::string level );

	private:

		void	_debug( void ) const;
		void	_info( void ) const;
		void	_warning( void ) const;
		void	_error( void ) const;

};

#endif