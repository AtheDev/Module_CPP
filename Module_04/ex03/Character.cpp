/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:47:30 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 18:25:46 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("Anonymous"), _totalMateria(0) {

	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	std::cout << "Character : Default constructor called" << std::endl;
}

Character::Character(std::string const & name): _name(name), _totalMateria(0) {

	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	std::cout << "Character : Constructor with parameter called" << std::endl;
}

Character::Character(Character const & cpy): _totalMateria(0) {

	std::cout << "Character : Copy constructor called" << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		_inventory[i] = NULL;
	*this = cpy; // Attention produit "operator="
}

Character::~Character(void) {

	std::cout << "Character : Destructor called" << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character &	Character::operator=(Character const & rhs) {

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		if (this->_totalMateria != 0)
		{
			for (int i = 0; i < MAX_INVENTORY; i++)
			{
				if (this->_inventory[i] != NULL)
				{
					delete this->_inventory[i];
					this->_inventory[i] = NULL;
				}
			}
		}
		this->_totalMateria = rhs._totalMateria;
		if (this->_totalMateria != 0)
		{
			for (int i = 0; i < MAX_INVENTORY; i++)
			{
				if (rhs._inventory[i] != NULL)
					this->_inventory[i] = rhs._inventory[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const &		Character::getName(void) const {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	if (this->_totalMateria != 4)
	{
		if (m != NULL)
		{
			for (int i = 0; i < MAX_INVENTORY; i++)
				if (this->_inventory[i] == NULL)
				{
					this->_inventory[i] = m;
					this->_totalMateria += 1;
					break ;
				}
		}
	}
}

void	Character::unequip(int idx) {

	if (idx >= 0 && idx < MAX_INVENTORY && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
		this->_totalMateria -= 1;
	}
}

void	Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx < MAX_INVENTORY && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

void	Character::displayInventory(void) const {

	std::cout << std::endl << "DISPLAY INVENTORY --> " << this->getName() << std::endl;
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			std::cout << this->_inventory[i]->getType() << std::endl;
		}
		else
			std::cout << "empty" << std::endl;
	}
	std::cout << std::endl;
}

AMateria *	Character::getMateria(int idx) {

	return (this->_inventory[idx]);
}