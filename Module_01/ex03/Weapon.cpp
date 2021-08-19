/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:01:46 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 16:16:13 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name): _type(name) {

}

Weapon::~Weapon(void) {

}

std::string const &	Weapon::getType(void) const {

	return this->_type;
}

void	Weapon::setType(std::string newType) {

	this->_type = newType;
}
