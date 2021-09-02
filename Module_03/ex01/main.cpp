/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:24:46 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/31 17:45:22 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	testClapTrap(void)
{
	std::cout << "***********************************" << std::endl
				<< "********** Test ClapTrap **********" << std::endl
				<< "***********************************" << std::endl;

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
}

void	testScavTrap(void)
{
	std::cout << "***********************************" << std::endl
				<< "********** Test ScavTrap **********" << std::endl
				<< "***********************************" << std::endl;

	ScavTrap	st1("Mike");
	ScavTrap	st2("John");

	std::cout << std::endl;

	st1.attack(st2.getName());
	st2.takeDamage(st1.getAttackDamage());
	st2.beRepaired(10);

	std::cout << std::endl << "===== Test copy =====" << std::endl;
	ScavTrap	st3(st1);
	st3.attack(st1.getName());

	std::cout << std::endl << "===== Test assignation =====" << std::endl;
	ScavTrap	st4;
	st4 = ScavTrap("Gordon");
	st4.attack(st1.getName());
	st4.ClapTrap::attack(st1.getName());
	st4.guardGate();

	std::cout << std::endl;
}

int	main()
{
	testClapTrap();
	std::cout << std::endl << std::endl;
	testScavTrap();
	std::cout << std::endl << std::endl;

	return (0);
}
