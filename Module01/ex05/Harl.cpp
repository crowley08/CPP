/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 11:31:12 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:24:23 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.Class.hpp"

Harl::Harl( void ){}

Harl::~Harl( void ){}

void	Harl::_debug( void ) const
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double";
	std::cout << "-cheese-triple-pickle-special-ketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::_error( void ) const
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::_info( void ) const
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning( void ) const
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	arrayLevel[4] = {"debug", "info", "warning", "error"};
	void	(Harl::*f[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arrayLevel[i] == level)
		{
            (this->*f[i])();
			return ;
		}
        i++;
	}
	std::cout << "complain not defined" << std::endl;
}
