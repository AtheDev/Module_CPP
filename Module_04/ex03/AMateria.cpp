/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:29:16 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/09 13:25:59 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) {

	std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type) {

	std::cout << "AMateria : Constructor with parameter called" << std::endl;
}

AMateria::~AMateria(void) {

	std::cout << "AMateria : Destructor called" << std::endl;
}

std::string const &	AMateria::getType(void) const {

	return (this->type);
}

void	AMateria::use(ICharacter & target) {

	(void)target;
}