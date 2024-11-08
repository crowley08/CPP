/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:16:28 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:37:00 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

void	printSearchContactAttributes( Contact *contact )
{
	std::cout << "	First name - " << contact->getFirstName() << std::endl;
    std::cout << "	Last name - " << contact->getLastName() << std::endl;
    std::cout << "	Nickname -  " << contact->getNickName() << std::endl;
    std::cout << "	Phone number - " << contact->getPhoneNumber() << std::endl;
    std::cout << "	Darkest secret - " << contact->getSecret() << std::endl;
	std::cout << std::endl;
}

Contact	searchContact( PhoneBook *book, int i )
{
	Contact	tmp;

	i--;
	tmp = book->getContact(i);
	std::cout << std::endl;
	printSearchContactAttributes(&tmp);
	return (tmp);
}

void	printContact( PhoneBook *book )
{
	int		count;
	Contact	tmp;
	int		str;

	count = book->getCount();
	if (count == 0)
	{
		std::cout << "There is no contact in your repertory" << std::endl;
		std::cout << "type [ADD] to add contact" << std::endl;
		return ;
	}
	printChart(book);
	if (count > 0)
	{
		std::cout << "Enter the index you search for - ";
		std::cin >> str;
		while (str > count  || str < 1)
		{
			std::cin.clear();
			std::cout << "Please enter an index between 1 and " << count << "  - ";
			std::cin >> str;
		}
		tmp = searchContact(book, str);
	}
	return ;
}
