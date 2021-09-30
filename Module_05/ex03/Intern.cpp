/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:49:35 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/29 20:49:37 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

}

Intern::~Intern(void) {

}

Form *  Intern::makeForm(std::string const & name, std::string const & target) {

    std::string     tabForm[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *          (Intern::*f[4])(std::string const & target) =  {&Intern::makeShrubberyCreationForm,
                                                                    &Intern::makeRobotomyRequestForm,
                                                                    &Intern::makePresidentialPardonForm
                                                                };
    for (int i = 0; i < 3; i++)
    {
        if (name == tabForm[i])
        {
            std::cout << "Intern creates " << name << " form." << std::endl;
            return (this->*f[i])(target);
        }
    }
    std::cout << "Intern can't create " << name << " form because it doesn't exist." << std::endl;
    return 0;
}

Form *  Intern::makeShrubberyCreationForm(std::string const & target) {

    return new ShrubberyCreationForm(target);
}

Form *  Intern::makeRobotomyRequestForm(std::string const & target) {

    return new RobotomyRequestForm(target);
}

Form *  Intern::makePresidentialPardonForm(std::string const & target) {

    return new PresidentialPardonForm(target);
}