/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:50:37 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/10 15:51:03 by adupuy           ###   ########.fr       */
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
		std::string	value = av[1];
		if (value.find_first_not_of("0123456789") != std::string::npos)
			return (0);
		int	nbZombies;
		is >> nbZombies;
		if (nbZombies > 0)
		{
			zombies = zombieHorde(nbZombies, "Bob");
			for (int i = 0; i < nbZombies; i++)
				zombies[i].announce();
			delete [] zombies;
		}
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
