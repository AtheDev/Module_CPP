/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:53:32 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 10:55:43 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	std::cout << "==> Création d'un zombie test sur la pile" << std::endl;
	Zombie	zombie_paul_pile("Paul");
	zombie_paul_pile.announce();
	std::cout << std::endl;

	std::cout << "==> Création d'un zombie sur le tas avec la fonction: Zombie *newZombie(std::string name)" << std::endl;
	Zombie	*zombie_bob_tas;
	zombie_bob_tas = newZombie("Bob");
	zombie_bob_tas->announce();
	delete zombie_bob_tas;
	std::cout << std::endl;

	std::cout << "==> Création d'un zombie sur la pile avec la fonction: void randomChump(std::string name)" << std::endl;
	randomChump("Jack");
}
