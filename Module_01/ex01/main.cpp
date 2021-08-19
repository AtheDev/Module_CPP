/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:50:37 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 11:16:21 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Zombie	*zombies;
		std::istringstream	is(av[1]);
		int	nbZombies;
		is >> nbZombies;
		zombies = zombieHorde(nbZombies, "Bob");
		for (int i = 0; i < nbZombies; i++)
			zombies[i].announce();
		delete [] zombies;
	}
	else
	{
		Zombie	*zombies;
		zombies = zombieHorde(5, "Jack");
		for (int i = 0; i < 5; i++)
			zombies[i].announce();
		delete [] zombies;
	}
	return (0);
}
