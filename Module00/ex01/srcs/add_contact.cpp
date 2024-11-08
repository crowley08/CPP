/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:30:23 by saandria          #+#    #+#             */
/*   Updated: 2024/11/08 15:34:25 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

static void	enterFirstName( Contact *contact )
{
	std::string	str;

	std::cout << " Enter first name : ";
	std::getline(std::cin, str);
	while (str.empty())
	{
	    std::cout << "		First name should not be empty, please re-enter : ";
		std::getline(std::cin, str);
	}
	contact->setFirstName(str);
}

static void	enterLastName( Contact *contact )
{
	std::string	str;
	
	std::cout << " Enter last name : ";
	std::getline(std::cin, str);
	while (str.empty())
	{
	    std::cout << "		Last name should not be empty, please re-enter : ";
		std::getline(std::cin, str);
	}
	contact->setLastName(str);

}

static void	enterNickname( Contact *contact )
{
	std::string	str;
	
	std::cout << " Enter nickname : ";
	std::getline(std::cin, str);
	while (str.empty())
	{
	    std::cout << "		Nickname should not be empty, please re-enter : ";
		std::getline(std::cin, str);
	}
	contact->setNickName(str);
}

static int	is_number( std::string str )
{
	int	i;

	i = -1;
	while (str[++i])
        if (!std::isdigit(str[i]))
            return (0);
    return (1);
}

static void	enterPhoneNumber( Contact *contact )
{
	std::string	str;

	std::cout << " Enter phone number : ";
	std::getline(std::cin, str);
	while (str.empty())
	{
	    std::cout << "		Phone number should not be empty, please re-enter : ";
		std::getline(std::cin, str);
	}
	while (!is_number(str))
	{
		std::cout << "        Phone number should only contain digits, please re-enter : ";
        std::getline(std::cin, str);
  	}
	contact->setPhoneNumber(str);
}

static void	enterSecret( Contact *contact )
{
	std::string	str;

	std::cout << " Enter darkest secret : ";
	std::getline(std::cin, str);
	while (str.empty())
	{
	    std::cout << "		Darkest secret should not be empty, please re-enter : ";
		std::getline(std::cin, str);
	}
	contact->setSecret(str);
}

void	addContact( PhoneBook *repertory )
{
	Contact    	contact;

	enterFirstName(&contact);
	enterLastName(&contact);
	enterNickname(&contact);
	enterPhoneNumber(&contact);
	enterSecret(&contact);
	repertory->setContact(contact);
}
