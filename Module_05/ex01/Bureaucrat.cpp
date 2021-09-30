/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:55:44 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/25 10:55:47 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***** CONSTRUCTOR / DESTRUCTOR / OVERLOAD OF = OPERATOR *****/
Bureaucrat::Bureaucrat(void): _name("Anonymous"), _grade(150) {

}

Bureaucrat::Bureaucrat(std::string const name, int grade):  _name(name),
                                                            _grade(this->_checkValueOfGrade(grade)) {

}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy): _name(cpy.getName()),
                                                _grade(this->_checkValueOfGrade(cpy._grade)) {

}

Bureaucrat::~Bureaucrat(void) {

}

Bureaucrat &    Bureaucrat::operator=(Bureaucrat const & rhs) {

    if (this != &rhs)
        this->_grade = this->_checkValueOfGrade(rhs.getGrade());
    return *this;
}


/***** GETTERS *****/
std::string const   Bureaucrat::getName(void) const {

    return this->_name;
}

int                 Bureaucrat::getGrade(void) const {

    return this->_grade;
}


/***** INCREMENT / DECREMENT *****/
void            Bureaucrat::incrementGrade(void) {

    try
    {
        this->_grade = this->_checkValueOfGrade(this->_grade - 1);
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
}

void            Bureaucrat::decrementGrade(void) {

    try
    {
        this->_grade = this->_checkValueOfGrade(this->_grade + 1);
    }
    catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
    }
}


/***** MEMBER FUNCTION *****/
void            Bureaucrat::signForm(Form & f) const {

    try
    {
        if (f.getIsSigned() == true)
            std::cout << f << " is already signed." << std::endl;
        else
        {
            f.beSigned(*this);
            std::cout << *this << " signs " << f << std::endl;
        }
    }
    catch (Form::GradeTooLowException & e) {
        std::cout << *this << " cannot sign " << f << " because : " << e.what() << std::endl;
    }
}


/***** EXCEPTION *****/
const char *    Bureaucrat::GradeTooHighException::what() const throw() {

    return ("Bureaucrat : Exception : grade too high");
}

const char *    Bureaucrat::GradeTooLowException::what() const throw() {

    return ("Bureaucrat : Exception : grade too low");
}

int             Bureaucrat::_checkValueOfGrade(int value) {

    if (value > 150)
        throw   Bureaucrat::GradeTooLowException();
    else if (value < 1)
        throw   Bureaucrat::GradeTooHighException();
    return value;
}


/***** OVERLOAD OF << OPERATOR *****/
std::ostream &  operator<<(std::ostream & os, Bureaucrat const & bc) {

    os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return os;
}