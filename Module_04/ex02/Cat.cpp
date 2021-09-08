/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:48:56 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/07 17:21:11 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal() {

	std::cout << "Cat : Default constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const & cpy) {

	std::cout << "Cat : Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = cpy;
}

Cat::~Cat(void) {

	std::cout << "Cat : Destructor called" << std::endl;
	delete _brain;
}

Cat &	Cat::operator=(Cat const & rhs) {

	if (this != &rhs)
	{
		this->type = rhs.type;
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MIAOOOOUUUU  MIAAAOOOOUUUUU !" << std::endl;
}

void	Cat::setIdeas(std::string const idea, int i) {

	this->_brain->setIdeas(idea, i);
}

void	Cat::printIdeas(void) const {

	for (int i = 0; i < SIZE_TAB_IDEAS; i++)
		std::cout << "			- " << this->_brain->getIdeas(i) << std::endl;
}
