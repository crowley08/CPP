/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:39:53 by saandria          #+#    #+#             */
/*   Updated: 2024/12/28 10:18:27 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "header.hpp"

class	PhoneBook
{
	public :
	
		PhoneBook( void );
		~PhoneBook( void );

		// setters
		void	setContact( Contact contact );

		// getters
		Contact	getContact( int index ) const;
		int		getIndex() const;
		int		getCount() const;

	private :
	
		static int	_count;
		Contact	_contact[8];
		int		_index;
};

#endif