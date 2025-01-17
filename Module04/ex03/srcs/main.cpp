/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <saandria@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:41:49 by saandria          #+#    #+#             */
/*   Updated: 2025/01/17 14:52:17 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.Class.hpp"
#include "../includes/Ice.Class.hpp"
#include "../includes/Cure.Class.hpp"
#include "../includes/Character.Class.hpp"

int	main( void )
{
	{
		AMateria* ice = new Ice();
		AMateria* cure = new Cure();
		
		Character i("i");
		i.equip(ice);
		i.equip(cure);
		
		Character j(i);
		j.use(1, i);
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->unEquip(0);
		me->unEquip(1);
		me->unEquip(5);
		delete tmp;
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	{
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria* tmp0 = src->createMateria("ice");
		AMateria* tmp1 = src->createMateria("ice");
		AMateria* tmp2 = src->createMateria("ice");
		AMateria* tmp3 = src->createMateria("ice");
		AMateria* tmp4 = src->createMateria("ice");
		AMateria* tmp5 = src->createMateria("cure");
		AMateria* tmp6 = src->createMateria("cure");
		AMateria* tmp7 = src->createMateria("cure");
		AMateria* tmp8 = src->createMateria("cure");
		AMateria* tmp9 = src->createMateria("cure");

		ICharacter*	fana = new Character("fana");
		ICharacter*	sanda = new Character("sanda");
		
		fana->equip(tmp0);		
		fana->equip(tmp2);		
		fana->equip(tmp4);		
		fana->equip(tmp6);		
		fana->equip(tmp8);		
		sanda->equip(tmp1);		
		sanda->equip(tmp3);		
		sanda->equip(tmp5);		
		sanda->equip(tmp7);		
		sanda->equip(tmp9);

		fana->use(0, *sanda);
		fana->use(1, *sanda);
		fana->use(2, *sanda);
		fana->use(3, *sanda);
		fana->use(4, *sanda);
		sanda->use(0, *fana);
		sanda->use(1, *fana);
		sanda->use(2, *fana);
		sanda->use(3, *fana);
		sanda->use(4, *fana);

		fana->unEquip(0);
		fana->unEquip(1);
		fana->unEquip(2);
		fana->unEquip(3);
		fana->unEquip(4);
		sanda->unEquip(0);
		sanda->unEquip(1);
		sanda->unEquip(2);
		sanda->unEquip(3);
		sanda->unEquip(4);

		fana->use(0, *sanda);
		fana->use(1, *sanda);
		fana->use(2, *sanda);
		fana->use(3, *sanda);
		fana->use(4, *sanda);
		sanda->use(0, *fana);
		sanda->use(1, *fana);
		sanda->use(2, *fana);
		sanda->use(3, *fana);
		sanda->use(4, *fana);

		delete tmp0;
		delete tmp1;
		delete tmp2;
		delete tmp3;
		delete tmp4;
		delete tmp5;
		delete tmp6;
		delete tmp7;
		delete tmp8;
		delete tmp9;

		delete sanda;
		delete fana;

		delete src;
	}
	return 0;
}
