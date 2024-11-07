/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:06:19 by saandria          #+#    #+#             */
/*   Updated: 2024/11/07 17:05:42 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_h
# define CONTACT_CLASS_H

# include "header.hpp"

class	Contact
{
	public :

		Contact(void);
		~Contact(void);

		//setters
		void	setFirstName(std::string firstname);
		void	setLastName(std::string lastname);
		void	setNickName(std::string nickname);
		void	setPhoneNumber(std::string phonenumber);
		void	setSecret(std::string secret);
		void	setIndex(int index);

		//getters
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getSecret() const;
		int			getIndex() const;

	private :

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
		int			_index;	
};

#endif