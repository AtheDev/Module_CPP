/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:20:43 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:20:24 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {

	std::cout << "Cure : Default constructor called" << std::endl;
}

Cure::~Cure(void) {

	std::cout << "Cure : Destructor called" << std::endl;
}

AMateria *	Cure::clone(void) const {

	return (new Cure());
}

void			Cure::use(ICharacter & target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}