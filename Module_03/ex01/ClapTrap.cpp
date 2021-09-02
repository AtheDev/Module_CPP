/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:25:10 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/31 18:11:12 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _name(""), _hitpoints(10),
							_energyPoint(10), _attackDamage(0){

	std::cout << "ClapTrap : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10),
										_energyPoint(10), _attackDamage(0) {

	std::cout << "ClapTrap : Constructor called, " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy) {

	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap : Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {

	std::cout << "ClapTrap : Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

std::string		ClapTrap::getName(void) const {

	return (this->_name);
}

unsigned int	ClapTrap::getAttackDamage(void) const {

	return (this->_attackDamage);
}

void	ClapTrap::attack(std::string const & target) const {

	std::cout << "ClapTrap " << this->_name
				<< " attack " << target
				<< ", causing " << this->_attackDamage
				<< " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) const {

	std::cout << "ClapTrap " << this->_name
				<< " take damage and loses " << amount
				<< " hitpoints !"  << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) const {

	std::cout << "ClapTrap " << this->_name
				<< " be repaired and gets " << amount
				<< " hitpoints and energy points !" << std::endl;
}
