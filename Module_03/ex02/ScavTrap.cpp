/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:57:34 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/15 14:23:47 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {

	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_hitpoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	std::cout << "ScavTrap : Constructor with parameter called" << std::endl;
	_hitpoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & cpy): ClapTrap(cpy._name) {

	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap : Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs) {

	if (&rhs != this)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(std::string const & target) const {

	std::cout << "ScavTrap " << this->_name
				<< " attack " << target
				<< ", causing " << this->_attackDamage
				<< " points of damage !" << std::endl;
}

void	ScavTrap::guardGate(void) const {

	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
