/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:25:42 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/02 10:41:45 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap() {

	std::cout << "DiamondTrap : Default constructor called" << std::endl;
	_hitpoints = this->FragTrap::getHitpoints();
	_energyPoint = this->ScavTrap::_energyPoint;
	_attackDamage = this->FragTrap::getAttackDamage();
	_name = "";
	this->ClapTrap::_name = "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name) {

	std::cout << "DiamondTrap : Constructor with parameter called" << std::endl;
	_hitpoints = this->FragTrap::getHitpoints();
	_energyPoint = this->ScavTrap::_energyPoint;
	_attackDamage = this->FragTrap::getAttackDamage();
	_name = name;
	this->ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy) {

	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs) {

	std::cout << "DiamondTrap : Assignation operator called" << std::endl;
	if (&rhs != this) {
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
		this->ClapTrap::_name = rhs.ClapTrap::_name;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "DiamondTrap : my name is " << this->_name
				<< " and my ClapTrap name is " << this->ClapTrap::_name
				<< ", my attack damage are " << this->_attackDamage
				<< ", my energy points are " << this->_energyPoint
				<< ", my hitpoints are " << this->_hitpoints
				<< std::endl;
}

