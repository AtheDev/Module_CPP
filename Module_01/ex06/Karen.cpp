/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:28:06 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/19 19:07:02 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void) {

}

Karen::~Karen(void) {

}

void	Karen::complain(std::string level) {

	void	(Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string		tabLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;
	for (i = 0; i < 4; i++)
		if (!tabLevel[i].compare(level))
			break;

	switch(i) {

		case 0:	std::cout << "[ DEBUG ]" << std::endl;
				(this->*f[0])();
		case 1:	std::cout << "[ INFO ]" << std::endl;
				(this->*f[1])();
		case 2: std::cout << "[ WARNING ]" << std::endl;
				(this->*f[2])();
		case 3: std::cout << "[ ERROR ]" << std::endl;
				(this->*f[3])();
				break;
		default: std::cout << "[ Probably complaining about insignificant problems ]"
					<< std::endl;
					break;
	}
}

void	Karen::debug(void) {

	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!" << std::endl;
}

void	Karen::info(void) {

	std::cout <<"I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error(void) {

	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
