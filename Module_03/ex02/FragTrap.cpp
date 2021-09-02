/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:07:13 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/31 18:08:56 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

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

FragTrap::FragTrap(FragTrap const & cpy) {

	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap : Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {

	std::cout << "FragTrap : Assignation operator called" << std::endl;
	if (&rhs != this) {
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) const {

	std::cout << "FragTrap : I'll give you a high five guys !" << std::endl;
}
