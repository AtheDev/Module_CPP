/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:29:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 11:35:50 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(Animal const & cpy) {

	*this = cpy;
	std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal::~Animal(void) {

	std::cout << "Animal : Destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string	Animal::getType(void) const {

	return (this->type);
}

void	Animal::makeSound(void) const {

	std::cout << "I AM A BIG BIG ANIMAL !!" << std::endl;
}

void	Animal::setIdeas(std::string const idea, int i) {

	(void)idea;
	(void)i;
}

void	Animal::printIdeas(void) const {}
