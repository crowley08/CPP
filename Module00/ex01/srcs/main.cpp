/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:43:40 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:36:21 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

std::string	trunc( std::string str )
{
	if (str.size() >= 10)
		str = str.substr(0, 9) + ".";
	return (str);
}

void	printChartHead( void )
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void	printContactAttributes( Contact *contact )
{
	std::cout << "│" << std::setw(10) << std::right << contact->getIndex();
    std::cout << "│" << std::setw(10) << std::right << trunc(contact->getFirstName());
    std::cout << "│" << std::setw(10) << std::right << trunc(contact->getLastName());
    std::cout << "│" << std::setw(10) << std::right << trunc(contact->getNickName()) << "|" << std::endl;;
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

void	printChart( PhoneBook *repertory )
{
	Contact	contact;
	int	index;

	index = 0;
	printChartHead();
	while (index < repertory->getCount())
	{	
		contact = repertory->getContact(index);
		contact.setIndex(index + 1);
		printContactAttributes(&contact);
 		index++;
	}
}

int main( void )
{
	PhoneBook	repertory;
	std::string	str;

	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str.empty())
			continue ;
		if (str.compare("ADD") == 0)
			addContact(&repertory);
		else if (str.compare("SEARCH") == 0)
			printContact(&repertory);
		else if (str.compare("EXIT") == 0)
		    break ;
		else
		    std::cout << "Invalid command. Please try again." << std::endl;
	}
}
