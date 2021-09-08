/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:52:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/03 17:58:15 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {

	std::cout << "Brain : Default constructor called" << std::endl;
	for (int i = 0; i < NB_IDEAS; i++) {
		_ideas[i] = "";
	}
}

Brain::Brain(Brain const & cpy) {

	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = cpy;
}

Brain::~Brain(void) {

	std::cout << "Brain : Destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs) {

	if (this != &rhs)
		for (int i = 0; i < NB_IDEAS; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	return (*this);
}

std::string	Brain::getIdeas(int i) const {

	return (this->_ideas[i]);
}

void		Brain::setIdeas(std::string const idea, int i) {

	this->_ideas[i] = idea;
}
