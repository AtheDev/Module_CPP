/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:24:46 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/16 22:28:35 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

void	testClapTrap(void)
{
	std::cout << "***********************************" << std::endl
				<< "********** Test ClapTrap **********" << std::endl
				<< "***********************************"
				<< std::endl << std::endl;

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
				<< "***********************************"
				<< std::endl << std::endl;

	ScavTrap	st1("Mike");
	ScavTrap	st2("John");

	std::cout << std::endl;

	st1.attack(st2.getName());
	st2.takeDamage(st1.getAttackDamage());
	st2.beRepaired(10);

	std::cout << std::endl << "===== Test copy =====" << std::endl;
	ScavTrap	st3(st1);
	st3.attack(st1.getName());

	std::cout << std::endl << "===== Test assignation=====" << std::endl;
	ScavTrap	st4;
	st4 = ScavTrap("Gordon");
	st4.attack(st1.getName());
	st4.ClapTrap::attack(st1.getName());
	st4.guardGate();

	std::cout << std::endl;
}

void	testFragTrap(void)
{
	std::cout << "***********************************" << std::endl
				<< "********** Test FragTrap **********" << std::endl
				<< "***********************************"
				<< std::endl << std::endl;

	FragTrap	ft1("Joé");
	FragTrap	ft2("Mark");

	std::cout << std::endl;

	ft1.attack(ft2.getName());
	ft2.takeDamage(ft1.getAttackDamage());
	ft2.beRepaired(10);

	std::cout << std::endl << "===== Test copy =====" << std::endl;
	FragTrap	ft3(ft1);
	ft3.attack(ft1.getName());

	std::cout << std::endl << "===== Test assignation =====" << std::endl;
	FragTrap	ft4;
	ft4 = FragTrap("Brian");
	ft4.attack(ft1.getName());
	ft4.highFivesGuys();

	std::cout << std::endl;
}

void	testDiamondTrap(void)
{
	std::cout << "**************************************" << std::endl
				<< "********** Test DiamondTrap **********" << std::endl
				<< "**************************************"
				<< std::endl << std::endl;

	DiamondTrap	dt1("Dylan");
	DiamondTrap	dt2("Spike");

	std::cout << std::endl;

	dt1.attack(dt2.getName());
	dt2.takeDamage(dt1.getAttackDamage());
	dt2.beRepaired(10);

	std::cout << std::endl << "===== Test copy =====" << std::endl;
	DiamondTrap	dt3(dt1);
	dt3.attack(dt1.getName());

	std::cout << std::endl << "===== Test assignation =====" << std::endl;
	DiamondTrap	dt4;
	dt4 = DiamondTrap("Ben");
	std::cout << std::endl;
	dt4.attack(dt1.getName());
	dt4.ClapTrap::attack(dt1.getName());
	dt4.highFivesGuys();
	dt4.guardGate();
	dt4.whoAmI();

	std::cout << std::endl;
}


int	main()
{
	// if you want to do the old test

	/*testClapTrap();
	std::cout << std::endl << std::endl;
	testScavTrap();
	std::cout << std::endl << std::endl;
	testFragTrap();
	std::cout << std::endl << std::endl;*/

	testDiamondTrap();

	return (0);
}
