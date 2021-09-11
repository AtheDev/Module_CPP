/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:02:06 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/11 10:14:07 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {

}

HumanA::~HumanA(void) {

}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his "
		<< this->_weapon.getType() << std::endl;
}
