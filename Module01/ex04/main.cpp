/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:02:46 by saandria          #+#    #+#             */
/*   Updated: 2024/12/26 13:43:36 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	replace_occur(std::string& line, std::string& replaceWord, std::string& replaceBy)
{
	size_t	pos;

	pos = line.find(replaceWord);
	while (pos != std::string::npos)
	{
		line.erase(pos, replaceWord.length());
		line.insert(pos, replaceBy);
    	pos = line.find(replaceWord, pos + replaceBy.size());
	}
}

int main( int ac, char **argv)
{
	std::string	line;
	std::string	replaceWord;
	std::string	replaceBy;
	std::string	replaceFile;

	if (ac != 4)
	{
		std::cout << "usage: ./replace <filename> s1 s2" << std::endl;
		return (1);
	}
	std::ifstream	file1(argv[1]);
	if (!file1 || !file1.is_open())
	{
		std::cerr << "Error occured while opening file" << std::endl;
		return (1);
	}
	if (file1.peek() == EOF)
	{
		std::cerr << "empty file" << std::endl;
		return (1);
	}
	replaceFile = (std::string)argv[1] + ".replace";
	std::ofstream file2(replaceFile.c_str());
	replaceWord = argv[2];
	replaceBy = argv[3];
	while (std::getline(file1, line))
	{
		replace_occur(line, replaceWord, replaceBy);
		file2 << line << std::endl;
	}
	file1.close();
	file2.close();
	return (0);
}
