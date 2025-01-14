/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:26:28 by saandria          #+#    #+#             */
/*   Updated: 2025/01/14 11:32:26 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int main()
{
	{		
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete(i);
		delete(j);
		delete(meta);
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
		const Animal* meta = new Animal();
		const Cat* i = new Cat();
		const Dog* j = new Dog();
		const WrongCat*	wrongI = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << wrongI->getType() << " " << std::endl;
		wrongMeta->makeSound();
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		wrongI->makeSound();
		delete(i);
		delete(j);
		delete(wrongI);
		delete(wrongMeta);
		delete(meta);
	}
	return 0;
}