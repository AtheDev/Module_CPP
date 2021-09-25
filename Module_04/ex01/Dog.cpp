/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:49:21 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 09:47:36 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {

	std::cout << "Dog : Default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const & cpy) {

	std::cout << "Dog : Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = cpy;
}

Dog::~Dog(void) {

	std::cout << "Dog : Destructor called" << std::endl;
	delete _brain;
}

Dog &	Dog::operator=(Dog const & rhs) {

	if (this != &rhs)
	{
		this->type = rhs.type;
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "WOOUUFF WOOOOUUUUFFFFF !" << std::endl;
}

void	Dog::setIdeas(std::string const idea, int i) {

	this->_brain->setIdeas(idea, i);
}

void	Dog::printIdeas(void) const {

	for (int i = 0; !this->_brain->getIdeas(i).empty(); i++)
		std::cout << "			- " << this->_brain->getIdeas(i) << std::endl;
}