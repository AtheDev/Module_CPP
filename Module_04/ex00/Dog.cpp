/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:49:21 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 14:17:22 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal() {

	std::cout << "Dog : Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & cpy) {

	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog(void) {

	std::cout << "Dog : Destructor called" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "WOOUUFF WOOOOUUUUFFFFF !" << std::endl;
}
