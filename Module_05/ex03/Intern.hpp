/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:49:27 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/29 20:49:29 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//class Form;

class   Intern {

    public:

        Intern(void);
        ~Intern(void);

        Form *  makeForm(std::string const & name, std::string const & target);
        Form *  makeShrubberyCreationForm(std::string const & target);
        Form *  makeRobotomyRequestForm(std::string const & target);
        Form *  makePresidentialPardonForm(std::string const & target);

    private:

        Intern(Intern const & cpy);
        Intern &        operator=(Intern const & rhs);

};

#endif