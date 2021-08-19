/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:02:06 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/18 16:11:49 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {

}

HumanA::~HumanA(void) {

}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his "
		<< this->_weapon.getType() << std::endl;
}
