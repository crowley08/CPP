/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:41:49 by saandria          #+#    #+#             */
/*   Updated: 2025/01/15 16:13:22 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.Class.hpp"
#include "../includes/Ice.Class.hpp"
#include "../includes/Cure.Class.hpp"
#include "../includes/Character.Class.hpp"

int	main( void )
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->unEquip(0);
		me->unEquip(1);
		me->unEquip(5);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria* tmp;

		ICharacter*	me = new Character("me");
		ICharacter*	bob = new Character("bob");
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(5, *bob);
		me->unEquip(4);
		me->unEquip(7);
		delete bob;
		delete me;
		delete src;
	}
	return 0;
}
