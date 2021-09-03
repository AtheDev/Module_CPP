/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 10:48:56 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 14:17:00 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal() {

	std::cout << "Cat : Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const & cpy) {

	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat(void) {

	std::cout << "Cat : Destructor called" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {

	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MIAOOOOUUUU  MIAAAOOOOUUUUU !" << std::endl;
}
