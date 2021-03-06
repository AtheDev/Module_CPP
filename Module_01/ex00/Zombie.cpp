/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:13:06 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/10 11:06:03 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {

}

Zombie::~Zombie(void) {

	std::cout << _name << " is died" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
