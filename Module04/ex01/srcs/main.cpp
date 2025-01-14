/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:26:28 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 13:27:57 by saandria         ###   ########.fr       */
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
		const Animal*	i = new Dog();
		const Animal*	j = new Cat();
	
		delete(i);
		delete(j);
	}
	return 0;
}
