/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:57:42 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/25 10:57:44 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

void    basicTest()
{
    std::cout << "********************************" << std::endl; 
    std::cout << "********** BASIC TEST **********" << std::endl;
    std::cout << "********************************" << std::endl << std::endl; 

    std::cout << "==> Bureaucrat <==" << std::endl;
    Bureaucrat  bob;
    Bureaucrat  jack("Jack");
    Bureaucrat  mike("Mike", 4);
    Bureaucrat  john(mike);
    Bureaucrat  paul;
    paul = mike;

    std::cout << std::endl;
}

void    createBureaucrat(std::string name, int grade)
{
    std::cout << "=> Create bureaucrat " << name << " with a grade of " << grade << std::endl;
    try
    {
        Bureaucrat bc(name, grade);
    }
    catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
}

void    testCreateWithValidGrade()
{
    std::cout << "**********************************************" << std::endl; 
    std::cout << "********** TEST WITH VALIDE GRADE **********" << std::endl;
    std::cout << "**********************************************" << std::endl << std::endl; 

    std::cout << "==> Bureaucrat <==" << std::endl;
    createBureaucrat("Bob", 3);
    createBureaucrat("Jack", 150);
    createBureaucrat("Mike", 1);

    std::cout << std::endl;    
}

void    testCreateWithInvalidGrade()
{
    std::cout << "********************************************" << std::endl; 
    std::cout << "********** TEST WITH INVALIDE GRADE **********" << std::endl;
    std::cout << "********************************************" << std::endl << std::endl; 

    std::cout << "==> Bureaucrat <==" << std::endl;
    createBureaucrat("Bob", 0);
    createBureaucrat("Jack", 345);
    createBureaucrat("Mike", -45);

    std::cout << std::endl;
}

void    testIncrementGrade()
{
    std::cout << "******************************************" << std::endl; 
    std::cout << "********** TEST INCREMENT GRADE **********" << std::endl;
    std::cout << "******************************************" << std::endl << std::endl; 

    Bureaucrat paul("Paul", 10);
    std::cout << paul << std::endl;
    std::cout << std::endl << "=> Use the incrementGrade() function x1" << std::endl;
    paul.incrementGrade();
    std::cout << paul << std::endl;

    std::cout << std::endl << "=> Use the incrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.incrementGrade();
    std::cout << paul << std::endl;

    std::cout << std::endl << "=> Create Bureaucrat by copy" << std::endl;
    Bureaucrat paul_cpy(paul);
    std::cout << paul_cpy << std::endl;

    std::cout << std::endl << "=> Use the incrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.incrementGrade();

    std::cout << paul << std::endl;   
    std::cout << paul_cpy << std::endl;
    std::cout << std::endl;
}

void    testDecrementGrade()
{
    std::cout << "******************************************" << std::endl; 
    std::cout << "********** TEST DECREMENT GRADE **********" << std::endl;
    std::cout << "******************************************" << std::endl << std::endl; 

    Bureaucrat paul("Paul", 140);
    std::cout << paul << std::endl;
    std::cout << std::endl << "=> Use the decrementGrade() function x1" << std::endl;
    paul.decrementGrade();
    std::cout << paul << std::endl;

    std::cout << std::endl << "=> Use the decrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.decrementGrade();
    std::cout << paul << std::endl;

    std::cout << std::endl << "=> Create Bureaucrat by copy" << std::endl;
    Bureaucrat paul_cpy(paul);
    std::cout << paul_cpy << std::endl;

    std::cout << std::endl << "=> Use the decrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.decrementGrade();

    std::cout << paul << std::endl;   
    std::cout << paul_cpy << std::endl;
    std::cout << std::endl;
}

void testShrubberyCreationForm()
{
    std::cout << "*************************************************" << std::endl; 
    std::cout << "********** TEST SHRUBBERRYCREATIONFORM **********" << std::endl;
    std::cout << "*************************************************" << std::endl << std::endl; 

    std::cout << "=> Create 2 Bureaucrat" << std::endl;
    Bureaucrat paul("Paul", 5);
    Bureaucrat mike("Mike", 148);
    std::cout << paul << std::endl;
    std::cout << mike << std::endl;

    std::cout << std::endl << "=> Create  a form ShrubberyCreationForm" << std::endl;
    ShrubberyCreationForm shCF("home");

    std::cout << shCF << std::endl;

    std::cout << std::endl << "=> Mike tries to sign but his level is too low" << std::endl;
    mike.signForm(shCF);

    std::cout << std::endl << "=> Paul tries to execute the form but the form isn't signed" << std::endl;
    paul.executeForm(shCF);

    std::cout << std::endl << "=> Paul sign" << std::endl;
    paul.signForm(shCF);

    std::cout << std::endl << "=> Mike tries to execute but his level is too low" << std::endl;
    mike.executeForm(shCF);

    std::cout << std::endl << "=> Paul executes the form" << std::endl;
    paul.executeForm(shCF);

    std::cout << std::endl;
}

void testRobotomyRequestForm()
{
    std::cout << "**********************************************" << std::endl; 
    std::cout << "********** TEST ROBOTOMYREQUESTFORM **********" << std::endl;
    std::cout << "**********************************************" << std::endl << std::endl; 

    std::cout << "=> Create 2 Bureaucrat" << std::endl;
    Bureaucrat paul("Paul", 5);
    Bureaucrat mike("Mike", 148);
    std::cout << paul << std::endl;
    std::cout << mike << std::endl;

    std::cout << std::endl << "=> Create  a form RobotomyRequestForm" << std::endl;
    RobotomyRequestForm rRF("Bob");

    std::cout << rRF << std::endl;

    std::cout << std::endl << "=> Mike tries to sign but his level is too low" << std::endl;
    mike.signForm(rRF);

    std::cout << std::endl << "=> Paul tries to execute the form but the form isn't signed" << std::endl;
    paul.executeForm(rRF);

    std::cout << std::endl << "=> Paul sign" << std::endl;
    paul.signForm(rRF);

    std::cout << std::endl << "=> Mike tries to execute but his level is too low" << std::endl;
    mike.executeForm(rRF);

    std::cout << std::endl << "=> Paul executes the form" << std::endl;
    paul.executeForm(rRF);

    std::cout << std::endl;
}

void    testPresidentialPardonForm()
{
    std::cout << "*************************************************" << std::endl; 
    std::cout << "********** TEST PRESIDENTIALPARDONFORM **********" << std::endl;
    std::cout << "*************************************************" << std::endl << std::endl; 

    std::cout << "=> Create 2 Bureaucrat" << std::endl;
    Bureaucrat paul("Paul", 5);
    Bureaucrat mike("Mike", 148);
    std::cout << paul << std::endl;
    std::cout << mike << std::endl;

    std::cout << std::endl << "=> Create  a form PresidentialPardonForm" << std::endl;
    PresidentialPardonForm PPF("Bob");

    std::cout << PPF << std::endl;

    std::cout << std::endl << "=> Mike tries to sign but his level is too low" << std::endl;
    mike.signForm(PPF);

    std::cout << std::endl << "=> Paul tries to execute the form but the form isn't signed" << std::endl;
    paul.executeForm(PPF);

    std::cout << std::endl << "=> Paul sign" << std::endl;
    paul.signForm(PPF);

    std::cout << std::endl << "=> Mike tries to execute but his level is too low" << std::endl;
    mike.executeForm(PPF);

    std::cout << std::endl << "=> Paul executes the form" << std::endl;
    paul.executeForm(PPF);

    std::cout << std::endl; 
}

int main()
{
    // if you want to do the old test

    /*basicTest();
    std::cout << std::endl << std::endl;
    testCreateWithInvalidGrade();
    std::cout << std::endl << std::endl;
    testCreateWithValidGrade();
    std::cout << std::endl << std::endl;
    testIncrementGrade();
    std::cout << std::endl << std::endl;
    testDecrementGrade();
    std::cout << std::endl << std::endl;*/
    testShrubberyCreationForm();
    std::cout << std::endl << std::endl;
    testRobotomyRequestForm();
    std::cout << std::endl << std::endl;
    testPresidentialPardonForm();
    return 0;
}