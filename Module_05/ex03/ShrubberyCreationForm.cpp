/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:41:08 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/28 11:41:11 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137),
                                                    _target("Target_default") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):   Form("ShrubberyCreationForm", 145, 137),
                                                                            _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) {

    *this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

    if (this != &rhs)
    {
        this->_target = rhs.getTarget();
        Form::operator=(rhs);
    }
    return *this;
}

std::string     ShrubberyCreationForm::getTarget(void) const {

    return this->_target;
}

void            ShrubberyCreationForm::executeAction(std::string target) const {

    std::string     fileName = target + "_shrubbery";
    std::ofstream   ofs(fileName.c_str());
    if (!ofs.is_open())
        std::cout << "Error opening file : " << fileName << std::endl;
    else
    {
        ofs << "             _______               _______" << std::endl
            << "           /         \\           /         \\" << std::endl
            << "          /      /\\   \\         / /\\        \\" << std::endl
            << "         /      o  o   \\       / o  o        \\" << std::endl
            << "        /               \\     /         /\\    \\" << std::endl
            << "       /  /\\             \\   /         o  o    \\" << std::endl
            << "       | o  o    /\\      |   |  /\\             |" << std::endl
            << "       |        o  o     |   | o  o            |" << std::endl
            << "        \\ _ _ _ _ _ _ _ /     \\ _ _ _ _ _ _ _ /" << std::endl
            << "          \\          /          \\          /" << std::endl
            << "           |        |            |        |" << std::endl
            << "           |        |            |        |" << std::endl
            << "==========/          \\==========/          \\=========="
            << std::endl;
        ofs.close();
        std::cout << "File " << fileName << " is created !" << std::endl;
    }
}