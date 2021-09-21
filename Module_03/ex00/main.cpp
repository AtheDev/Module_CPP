/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:24:46 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/31 16:30:38 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main()
{
	ClapTrap	ct1("Bob");
	ClapTrap	ct2("Jack");

	std::cout << std::endl;

	ct1.attack(ct2.getName());
	ct2.takeDamage(ct1.getAttackDamage());
	ct2.beRepaired(5);

	std::cout << std::endl << "===== Test copy =====" << std::endl;
	ClapTrap	ct3(ct1);
	ct3.attack(ct2.getName());

	std::cout << std::endl << "===== Test assignation =====" << std::endl;
	ClapTrap	ct4;
	ct4 = ClapTrap("David");
	ct4.attack(ct2.getName());

	std::cout << std::endl;

	return (0);
}
