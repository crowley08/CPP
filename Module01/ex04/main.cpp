/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:02:46 by saandria          #+#    #+#             */
/*   Updated: 2024/12/24 12:27:53 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main( int ac, char **argv)
{
	std::string	line;

	if (ac != 4)
	{
		std::cout << "usage: ./replace <filename> s1 s2" << std::endl;
		return (1);
	}
	std::ifstream	file1(argv[1]);
	if (!file1)
	{
		std::cerr << "Error occured while opening file" << std::endl;
		return (1);
	}
	std::ofstream file2((std::string)argv[1] + ".replace", std::ios::app);
	while (std::getline(file1, line))
	{
		if (line.find(argv[2]))
			line = argv[3];
		file2 << line << std::endl;
	}
	return (0);
}