/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 09:23:13 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 09:54:14 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		string= "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "memory address: " << std::endl;
	std::cout << "string: "<< &string << std::endl;
	std::cout << "stringPTR: "<<(void *)stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << "value: " << std::endl;
	std::cout << "string: "<< string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
