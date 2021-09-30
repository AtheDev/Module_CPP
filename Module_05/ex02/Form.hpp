/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:07:20 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/26 16:07:22 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class   Form {

    public:

        Form(void);
        Form(std::string name, int gradeSign = 150, int gradeExecute = 150);
        Form(Form const & cpy);
        virtual ~Form(void);

        Form &  operator=(Form const & rhs);

        //Getter
        std::string const       getName(void) const;
        bool                    getIsSigned(void) const;
        int                     getGradeSign(void) const;
        int                     getGradeExecute(void) const;
        virtual std::string     getTarget(void) const = 0;

        //Member function
        void                beSigned(Bureaucrat const & bc);
        void                execute(Bureaucrat const & executor) const;
        virtual void        executeAction(std::string target) const = 0;

        //Class Exception
        class   GradeTooHighException : public std::exception {

            public:

                virtual const char * what() const throw();
        };

        class   GradeTooLowException : public std::exception {

            public:

                virtual const char * what() const throw();
        };

        class   FormIsNotSignedException : public std::exception {

            public:

                virtual const char * what() const throw();
        };

    private:

    std::string const   _name;
    bool                _isSigned;
    int const           _gradeSign;
    int const           _gradeExecute;

    int    _checkValueOfGrade(int value);

};

std::ostream &  operator<<(std::ostream & os, Form const & f);

#endif