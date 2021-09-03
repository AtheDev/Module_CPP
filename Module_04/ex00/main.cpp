/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:23:00 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 12:37:48 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << w_i->getType() << " " << std::endl;

	w_i->makeSound();
	w_meta->makeSound();

	std::cout << std::endl << std::endl << "==== TEST COPY =====" << std::endl;

	const Animal* meta_cpy(meta);
	const Animal* i_cpy(i);
	const Animal* j_cpy(j);

	std::cout << j_cpy->getType() << " " << std::endl;
	std::cout << i_cpy->getType() << " " << std::endl;

	i_cpy->makeSound();
	j_cpy->makeSound();
	meta_cpy->makeSound();

	const WrongAnimal* w_meta_cpy(w_meta);
	const WrongAnimal* w_i_cpy(w_i);

	std::cout << w_i_cpy->getType() << " " << std::endl;

	w_i_cpy->makeSound();
	w_meta_cpy->makeSound();

	std::cout << std::endl << std::endl << "==== TEST ASSIGNATION =====" << std::endl;

	const Animal* meta_ass = meta;
	const Animal* i_ass = i;
	const Animal* j_ass = j;

	std::cout << j_ass->getType() << " " << std::endl;
	std::cout << i_ass->getType() << " " << std::endl;

	i_ass->makeSound();
	j_ass->makeSound();
	meta_ass->makeSound();

	const WrongAnimal* w_meta_ass = w_meta;
	const WrongAnimal* w_i_ass = w_i;

	std::cout << w_i_ass->getType() << " " << std::endl;

	w_i_ass->makeSound();
	w_meta_ass->makeSound();

	std::cout << std::endl;

	delete w_meta;
	delete w_i;
	delete meta;
	delete j;
	delete i;
}
