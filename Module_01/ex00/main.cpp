/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:53:32 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/27 15:23:26 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	std::cout << "==> Creating a test zombie on the stack" << std::endl;
	Zombie	zombie_paul_pile("Paul");
	zombie_paul_pile.announce();
	std::cout << std::endl;

	std::cout << "==> Creating a zombie on the heap with the function: "
		<< "Zombie *newZombie(std::string name)" << std::endl;
	Zombie	*zombie_bob_tas;
	zombie_bob_tas = newZombie("Bob");
	zombie_bob_tas->announce();
	delete zombie_bob_tas;
	std::cout << std::endl;

	std::cout << "==> Creating a zombie on the stack with the function: "
		<< "void randomChump(std::string name)" << std::endl;
	randomChump("Jack");

	std::cout << std::endl;
}
