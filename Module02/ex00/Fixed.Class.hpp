/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:56:54 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 12:18:49 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const& src );
		~Fixed();

		Fixed&	operator=( Fixed const& rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
	    int	_value;
		static int const	_bits;

};

std::ostream&	operator<<( std::ostream& o, Fixed const& rhs );

#endif /* *********************************************************** FIXED_H */