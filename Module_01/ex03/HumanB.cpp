/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:02:27 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/11 10:14:40 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {

}

HumanB::~HumanB(void) {

}

void	HumanB::attack(void) const {

	std::cout << this->_name << " attacks with his "
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->_weapon = &weapon;
}
