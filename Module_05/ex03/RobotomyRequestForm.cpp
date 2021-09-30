/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:41:41 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/28 11:41:43 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45),
                                                    _target("Target_default") {

}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):   Form("RobotomyRequestForm", 72, 45),
                                                                            _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) {

    *this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

    if (this != &rhs)
    {
        this->_target = rhs.getTarget();
        Form::operator=(rhs);
    }
    return *this;
}

std::string     RobotomyRequestForm::getTarget(void) const {

    return this->_target;
}

void            RobotomyRequestForm::executeAction(std::string target) const {

    srand(time(NULL));
    int num = rand() % 2;
    std::cout << "Bzzzz Bzzzzzzzzz Bzzzzzzzzzzzzzzzzzzz" << std::endl;
    if (num == 0)
        std::cout << target << " has been robotomized !!" << std::endl;
    else
        std::cout << "Oups! " << target << "'s robotomization failed !!" << std::endl;
}