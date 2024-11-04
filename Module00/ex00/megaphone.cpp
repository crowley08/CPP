/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:44:16 by saandria          #+#    #+#             */
/*   Updated: 2024/11/04 12:42:50 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*meg_toupper(char *s)
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
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			std::cout << meg_toupper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
