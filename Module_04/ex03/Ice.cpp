/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:20:59 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:20:13 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {

	std::cout << "Ice : Default constructor called" << std::endl;
}

Ice::~Ice(void) {

	std::cout << "Ice : Destructor called" << std::endl;
}

AMateria *	Ice::clone(void) const {

	return (new Ice());
}

void			Ice::use(ICharacter & target) {

	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}