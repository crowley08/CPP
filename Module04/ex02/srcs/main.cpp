/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:26:28 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 15:03:44 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int main()
{
	{		
		AAnimal	*array[100];
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
		const AAnimal*	i = new Dog();
		const AAnimal*	j = new Cat();
	
		delete(i);
		delete(j);
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{		
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete(i);
		delete(j);
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
	
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete(i);
		delete(meta);
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		const WrongAnimal* wrongMeta = new WrongAnimal();
		const Cat* i = new Cat();
		const Dog* j = new Dog();
		const WrongCat*	wrongI = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << wrongI->getType() << " " << std::endl;
		wrongMeta->makeSound();
		i->makeSound();
		j->makeSound();
		wrongI->makeSound();
		delete(i);
		delete(j);
		delete(wrongI);
		delete(wrongMeta);
	}
	return 0;
}
