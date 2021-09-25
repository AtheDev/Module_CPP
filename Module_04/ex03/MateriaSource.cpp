/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:16:26 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:07:52 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _totalSource(0) {

	std::cout << "MateriaSource : default constructor called" << std::endl;
	for (int i = 0; i < MAX_SOURCE; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {

	std::cout << "MateriaSource : Copy constructor called" << std::endl;
	for (int i = 0; i < MAX_SOURCE; i++)
		this->_source[i] = NULL;
	for (int i = 0; i < cpy._totalSource; i++)
		this->_source[i] = cpy._source[i]->clone();
	this->_totalSource = cpy._totalSource;
}

MateriaSource::~MateriaSource(void) {

	std::cout << "MateriaSource : Destructor called" << std::endl;
	for (int i = 0; i < MAX_SOURCE; i++)
		if (_source[i] != NULL)
			delete _source[i];
}

MateriaSource &		MateriaSource::operator=(MateriaSource const & rhs) {

	if (this != &rhs)
	{
		for (int i = 0; i < this->_totalSource; i++)
		{
			delete this->_source[i];
			this->_source[i] = NULL;
		}
		for (int i = 0; i < rhs._totalSource; i++)
			this->_source[i] = rhs._source[i]->clone();
		this->_totalSource = rhs._totalSource;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *newMateria) {

	if (this->_totalSource != 4)
	{
		this->_source[this->_totalSource] = newMateria->clone();
		this->_totalSource += 1;
		delete newMateria;
	}
	else
		std::cout << "The MateriaSource 's inventory is full. "
			<< "This new Materia can't be learned." << std::endl;
}

AMateria *	MateriaSource::createMateria(std::string const & type) {

	if (!type.empty())
		for (int i = 0; i < MAX_SOURCE; i++)
			if (this->_source[i]->getType() == type)
				return (this->_source[i]->clone());
	return (0);
}

void	MateriaSource::displayInventory(std::string name) const {

	std::cout << std::endl << "DISPLAY INVENTORY --> " << name << std::endl;
	for (int i = 0; i < MAX_SOURCE; i++)
	{
		if (this->_source[i] != NULL)
		{
			std::cout << this->_source[i]->getType() << std::endl;
		}
		else
			std::cout << "empty" << std::endl;
	}
	std::cout << std::endl;
}