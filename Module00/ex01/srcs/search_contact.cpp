/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:16:28 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 11:55:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

void	printSearchChartHead(void)
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname";
	std::cout << "│" << std::setw(10) << std::right << "phone";
	std::cout << "│" << std::setw(10) << std::right << "secret" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void	printSearchContactAttributes(Contact *contact)
{
	std::cout << "│" << std::setw(10) << std::right << contact->getFirstName();;
    std::cout << "│" << std::setw(10) << std::right << contact->getLastName();
    std::cout << "│" << std::setw(10) << std::right << contact->getNickName();
    std::cout << "│" << std::setw(10) << std::right << contact->getPhoneNumber();
    std::cout << "│" << std::setw(10) << std::right << contact->getSecret() << "|" << std::endl;
	std::cout << "└──────────┴──────────┴──────────┴──────────┴──────────┘" << std::endl;
	std::cout << std::endl;
}

Contact	searchContact(PhoneBook *book, int i)
{
	Contact	tmp;

	i--;
	tmp = book->getContact(i);
	std::cout << std::endl;
	printSearchChartHead();
	printSearchContactAttributes(&tmp);
	return (tmp);
}

void	printContact(PhoneBook *book)
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
	while (count > 0)
	{
		std::cout << "Enter the index you search for - ";
		std::cin >> str;
		if(str > count  || str < 1)
		{
			std::cin.clear();
			std::cout << "Please enter an index between 1 and " << count << std::endl;
			continue ;
		}
		tmp = searchContact(book, str);
		break ;
	}
	return ;
}
