/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:55:52 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/25 10:55:55 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class   Bureaucrat {

    public:

        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade = 150);
        Bureaucrat(Bureaucrat const & cpy);
        ~Bureaucrat(void);

        Bureaucrat &        operator=(Bureaucrat const & rhs);

        //Getter for _name and _grade
        std::string const   getName(void) const;
        int                 getGrade(void) const;

        //2 function for increment and decrement _grade
        void                incrementGrade(void);
        void                decrementGrade(void);

        //Member function
        void                signForm(Form & f) const;

        //Class Exception
        class   GradeTooHighException : public std::exception {

            public:

                virtual const char * what() const throw();
        };

        class   GradeTooLowException : public std::exception {

            public:

                virtual const char * what() const throw();
        };

    private:

        std::string const   _name;
        int                _grade;

        int    _checkValueOfGrade(int value);
};

std::ostream &  operator<<(std::ostream & os, Bureaucrat const & bc);

#endif