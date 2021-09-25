/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:23:00 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/08 10:33:29 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

#define NB_ANIMAL 4

int main()
{
	std::string		tabIdeas[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	{
		Animal *tabAnimal[NB_ANIMAL];

		for (int i = 0; i < (NB_ANIMAL / 2); i++) {
			tabAnimal[i] = new Dog();
			for(int j = 0; j < SIZE_TAB_IDEAS; j++)
				tabAnimal[i]->setIdeas(tabIdeas[j], j);
		}
		for (int i = (NB_ANIMAL / 2); i < NB_ANIMAL; i++) {
			tabAnimal[i] = new Cat();
			for(int j = 0; j < SIZE_TAB_IDEAS; j++)
				tabAnimal[i]->setIdeas(tabIdeas[j], j);
		}

		std::cout << std::endl;

		for (int i = 0; i < NB_ANIMAL; i++) {
			std::cout << "tabAnimal[" << i << "] -> "
				<< tabAnimal[i]->getType() << std::endl
				<< "=> make sound : ";
			tabAnimal[i]->makeSound();
			std::cout << "=> Ideas : " << std::endl;
			tabAnimal[i]->printIdeas();
			std::cout << std::endl;
		}

		std::cout << std::endl;

		for (int i = 0; i < NB_ANIMAL; i++) {
			delete tabAnimal[i];
		}

		std::cout << std::endl << std::endl << "========== TEST SUBJECT =========="
			<< std::endl << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;

		std::cout << std::endl << std::endl;
	}


	std::cout << "========== TEST DEEP COPY WITH OPERATOR ASSIGNATION =========="
		<< std::endl << std::endl;
	{
		Cat	cat;
		for(int j = 0; j < SIZE_TAB_IDEAS; j++)
			cat.setIdeas(tabIdeas[j], j);
		{
			Cat	cat_cpy = cat;

		std::cout << "cat -> "
				<< cat.getType() << std::endl
				<< "=> make sound : ";
				cat.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat.printIdeas();
				std::cout << std::endl;

		std::cout << "cat_cpy -> "
				<< cat_cpy.getType() << std::endl
				<< "=> make sound : ";
				cat_cpy.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat_cpy.printIdeas();
				std::cout << std::endl;
		}

		std::cout << "cat -> "
				<< cat.getType() << std::endl
				<< "=> make sound : ";
				cat.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat.printIdeas();
				std::cout << std::endl << std::endl;
	}

	std::cout << std::endl
		<< "========== TEST DEEP COPY WITH COPY CONSTRUCTOR =========="
		<< std::endl << std::endl;

	{
		Cat	cat;
		for(int j = 0; j < SIZE_TAB_IDEAS; j++)
			cat.setIdeas(tabIdeas[j], j);
		{
			Cat	cat_cpy(cat);

		std::cout << "cat -> "
				<< cat.getType() << std::endl
				<< "=> make sound : ";
				cat.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat.printIdeas();
				std::cout << std::endl;

		std::cout << "cat_cpy -> "
				<< cat_cpy.getType() << std::endl
				<< "=> make sound : ";
				cat_cpy.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat_cpy.printIdeas();
				std::cout << std::endl;
		}

		std::cout << "cat -> "
				<< cat.getType() << std::endl
				<< "=> make sound : ";
				cat.makeSound();
				std::cout << "=> Ideas : " << std::endl;
				cat.printIdeas();
				std::cout << std::endl;
	}

	{
		// Test if Animal class should be instanciable
		//Animal newAnimal;
	}
}