/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:43:40 by saandria          #+#    #+#             */
/*   Updated: 2024/11/07 17:11:29 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

void	addContact(PhoneBook *book)
{
	std::string	str;
	Contact    	contact;


	std::cout << "Enter first name : ";
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout << "Enter last name : ";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Enter nickname : ";
	std::getline(std::cin, str);
	contact.setNickName(str);
	std::cout << "Enter phone number : ";
	std::getline(std::cin, str);
	contact.setPhoneNumber(str);
	std::cout << "Enter darkest secret : ";
	std::getline(std::cin, str);
	contact.setSecret(str);
	book->setContact(contact);
}

void	printChartHead(void)
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname";
	std::cout << "│" << std::setw(10) << std::right << "phone" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void	printContact(PhoneBook *book)
{
	int		index;	
	int		count;
	Contact	contact;

	index = 0;
	count = book->getCount();
	printChartHead();
	while (index < book->getCount())
	{	
		contact = book->getContact(index);
		contact.setIndex(index + 1);
    	std::cout << "│" << std::setw(10) << std::right << contact.getIndex();;
    	std::cout << "│" << std::setw(10) << std::right << contact.getFirstName();
    	std::cout << "│" << std::setw(10) << std::right << contact.getLastName();
    	std::cout << "│" << std::setw(10) << std::right << contact.getNickName();
    	std::cout << "│" << std::setw(10) << std::right << contact.getPhoneNumber() << "|" << std::endl;
		std::cout << "└──────────┴──────────┴──────────┴──────────┴──────────┘" << std::endl;
		index++;
	}
	if (count > 0)
	{
		
	}
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	str;

	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
	while (1)
	{
		std::cout << "$> ";
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
			addContact(&phonebook);
		else if (str.compare("SEARCH") == 0)
		{
			printContact(&phonebook);
		}
		else if (str.compare("EXIT") == 0)
		    break ;
		else
		    std::cout << "Invalid command. Please try again." << std::endl;
	}
}
