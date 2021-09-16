/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:53:02 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/17 00:22:59 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) {

	*this = cpy;
	std::cout << "WrongAnimal : Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal : Destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const {

	return (this->type);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "I AM A BIG BIG WRONG WRONG WRONG ANIMAL !!" << std::endl;
}

