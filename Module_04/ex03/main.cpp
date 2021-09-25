/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:25:45 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/25 10:07:18 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	testSubject(void)
{
	std::cout << "========== TEST SUBJECT ==========" << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl;

	ICharacter* me = new Character("me");

	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
}

void testCharacter()
{
	std::cout << "========== OTHER TESTS CHARACTER==========" << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		me->displayInventory();

		std::cout << std::endl << "***** DEEP COPY CHARACTER *****" << std::endl;
		{
			Character *bob(new Character(*me));

			std::cout << std::endl << "=> Display inventory BOB after deep copy" << std::endl;
			bob->displayInventory();
			tmp = src->createMateria("ice");
			bob->equip(tmp);
			tmp = src->createMateria("cure");
			bob->equip(tmp);

			std::cout << std::endl << "=> Display inventory BOB after equip() x2" << std::endl;
			bob->displayInventory();

			std::cout << std::endl << "=> Display inventory ME" << std::endl;
			me->displayInventory();

			std::cout << std::endl << "=> Use the use() function on all the Bob's inventory" << std::endl;
			bob->use(0, *me);
			bob->use(1, *me);
			bob->use(2, *me);
			bob->use(3, *me);

			std::cout << std::endl << "=> Use the unequip() function on Bob's inventory on index 3" << std::endl;
			AMateria *tmp2 = bob->getMateria(3);
			bob->unequip(3);

			std::cout << std::endl << "=> Display inventory BOB after unequip(3)" << std::endl;
			bob->displayInventory();

			delete tmp2;
			delete bob;
		}

		std::cout << std::endl << "=> Display inventory ME after delete bob" << std::endl;
		me->displayInventory();

		Character	jack("jack");

		std::cout << std::endl << "=> Use the use() function on all the Me's inventory" << std::endl;
		me->use(0, jack);
		me->use(1, jack);
		me->use(2, jack);
		me->use(3, jack);

		std::cout << std::endl;

		delete me;
		delete src;

	}
}

void	testMateriaSource(void)
{
	std::cout << "========== OTHER TESTS MATERIASOURCE ==========" << std::endl << std::endl;
	{
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		src->displayInventory("src");

		std::cout << std::endl << "***** DEEP COPY MATERIASOURCE *****" << std::endl;
		{
			MateriaSource * srcCopy(new MateriaSource(*src));

			std::cout << std::endl << "=> Display inventory SRCCOPY after deep copy" << std::endl;
			srcCopy->displayInventory("srcCopy");
			srcCopy->learnMateria(new Cure());
			srcCopy->learnMateria(new Ice());

			std::cout << std::endl << "=> Display inventory SRCCOPY after learnMateria() x2" << std::endl;
			srcCopy->displayInventory("srcCopy");

			std::cout << std::endl << "=> Display inventory SRC" << std::endl;
			src->displayInventory("src");

			delete srcCopy;
		}

		std::cout << std::endl << "=> Display inventory SRC after delete SRCCOPY" << std::endl;
		src->displayInventory("src");

		std::cout<< std::endl;

		delete me;
		delete src;
	}
}

int main()
{
	testSubject();
	std::cout << std::endl;
	testCharacter();
	std::cout << std::endl;
	testMateriaSource();

	return 0;
}
