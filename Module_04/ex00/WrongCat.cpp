/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:52:33 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 11:56:37 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal() {

	std::cout << "WrongCat : Default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & cpy) {

	std::cout << "WrongCat : Copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat : Destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {

	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "WRONG WRONG WRONG MIAAOOOUUUUU! !" << std::endl;
}

