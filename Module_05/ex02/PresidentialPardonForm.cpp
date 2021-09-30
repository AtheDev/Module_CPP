/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:42:13 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/28 11:42:14 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5),
                                                    _target("Target_default") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target):   Form("PresidentialPardonForm", 25, 5),
                                                                            _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) {

    *this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

    if (this != &rhs)
    {
        this->_target = rhs.getTarget();
        Form::operator=(rhs);
    }
    return *this;
}

std::string     PresidentialPardonForm::getTarget(void) const {

    return this->_target;
}

void            PresidentialPardonForm::executeAction(std::string target) const {

    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}