/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:07:13 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/15 14:26:57 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {

	std::cout << "FragTrap : Default constructor called" << std::endl;
	_hitpoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	std::cout << "FragTrap : Constructor with parameter called" << std::endl;
	_hitpoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & cpy): ClapTrap(cpy._name) {

	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {

	if (&rhs != this)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void) const {

	std::cout << "FragTrap : I'll give you a high five guys !" << std::endl;
}
