/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:26:28 by saandria          #+#    #+#             */
/*   Updated: 2025/01/16 13:45:30 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int main()
{
	{		
		Animal	*array[100];
		int		i = 0;
	
		while (i < 50)
			array[i++] = new Dog();
		while (i < 100)
			array[i++] = new Cat();
		for (int i = 0; i < 100; i++)
			array[i]->makeSound();
		for (int i = 0; i < 100; i++)
	        delete array[i];
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const Dog    i;
        const Dog    j(i);
		
		std::cout << i.getType() << std::endl;
		i.makeSound();
		j.makeSound();
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const Animal    i;
        const Animal    j = i;
		
		std::cout << i.getType() << std::endl;
		i.makeSound();
		j.makeSound();
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		Dog	basic;
		{
			Dog	tmp = basic;
		}
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const Cat    i;
        const Cat    j(i);
		
		std::cout << i.getType() << std::endl;
		i.makeSound();
		j.makeSound();
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const Animal    i;
        const Animal    j = i;
		
		std::cout << i.getType() << std::endl;
		i.makeSound();
		j.makeSound();
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		Cat	basic;
		{
			Cat	tmp = basic;
		}
	}
	return 0;
}
