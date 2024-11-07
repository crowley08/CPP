/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:44:16 by saandria          #+#    #+#             */
/*   Updated: 2024/11/07 10:17:21 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	meg_toupper(std::string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = std::toupper(s[i]);
		i++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	int			i;
	std::string	s;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			s = argv[i];
			std::cout << meg_toupper(s);
			i++;
		}
		std::cout << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
