/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:07:14 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/26 16:07:16 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***** CONSTRUCTOR / DESTRUCTOR / OVERLOAD OF = OPERATOR *****/
Form::Form(void): _name("Unknown form"), _isSigned(false), _gradeSign(150), _gradeExecute(150) {

}

Form::Form(std::string name, int gradeSign, int gradeExecute):  _name(name),
                                                                _isSigned(false),
                                                                _gradeSign(this->_checkValueOfGrade(gradeSign)),
                                                                _gradeExecute(this->_checkValueOfGrade(gradeExecute)) {

}

Form::Form(Form const & cpy):   _name(cpy.getName()),
                                _isSigned(false),
                                _gradeSign(this->_checkValueOfGrade(cpy.getGradeSign())),
                                _gradeExecute(this->_checkValueOfGrade(cpy.getGradeExecute())) {

}

Form::~Form(void) {
  
}

Form &    Form::operator=(Form const & rhs) {

    if (this != &rhs)
        this->_isSigned = rhs.getIsSigned();
    return *this;
}


/***** GETTERS *****/
std::string const   Form::getName(void) const {

    return this->_name;
}

bool                Form::getIsSigned(void) const {

    return this->_isSigned;
}

int                 Form::getGradeSign(void) const {

    return this->_gradeSign;
}

int                 Form::getGradeExecute(void) const {

    return this->_gradeExecute;
}


/***** MEMBER FUNCTION *****/
void                Form::beSigned(Bureaucrat const & bc) {

    if (bc.getGrade() > this->getGradeSign())
        throw   Form::GradeTooLowException();
    this->_isSigned = true;
}


/***** EXCEPTION *****/
const char *    Form::GradeTooHighException::what() const throw() {

    return ("Form : Exception : grade too high");
}

const char *    Form::GradeTooLowException::what() const throw() {

    return ("Form : Exception : grade too low");
}

int             Form::_checkValueOfGrade(int value) {

    if (value > 150)
        throw   Form::GradeTooLowException();
    else if (value < 1)
        throw   Form::GradeTooHighException();
    return value;
}


/***** OVERLOAD OF << OPERATOR *****/
std::ostream &  operator<<(std::ostream & os, Form const & f) {

    os << "Form : " << f.getName()
        << ", is signed = " << f.getIsSigned()
        << ", grade required to sign = " << f.getGradeSign()
        << ", grade required to execute = " << f.getGradeExecute();
    return os;
}