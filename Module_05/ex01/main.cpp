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

    std::cout << bob << std::endl;
    std::cout << jack << std::endl;
    std::cout << mike << std::endl;
    std::cout << john << std::endl;
    std::cout << paul << std::endl;

    std::cout << std::endl;

    std::cout << "==> Form <==" << std::endl;
    Form  number1;
    Form  number2("Number2");
    Form  number3("Number3", 4, 8);
    Form  number4(number3);
    Form  number5;
    number5 = number3;

    std::cout << std::endl;

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;
    std::cout << number5 << std::endl;

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

void    createForm(std::string name, int gradeSign, int gradeExecute)
{
    std::cout << "=> Create Form " << name
    << " with a grade[Sign ; Execute] = [ " << gradeSign << " ; " << gradeExecute << " ]" << std::endl;
    try
    {
        Form f(name, gradeSign, gradeExecute);
    }
    catch (Form::GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException & e) {
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

    std::cout << "==> Form <==" << std::endl;
    createForm("Number1", 4, 145);
    createForm("Number1", 1, 1);
    createForm("Number1", 87, 2);    
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

    std::cout << "==> Form <==" << std::endl;
    createForm("Number1", 0, 145);
    createForm("Number1", 1, 155);
    createForm("Number1", -9, -4); 
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

void    testSign()
{
    std::cout << "*******************************" << std::endl; 
    std::cout << "********** TEST SIGN **********" << std::endl;
    std::cout << "*******************************" << std::endl << std::endl; 

    std::cout << "=> Create 2 Bureaucrat" << std::endl;
    Bureaucrat paul("Paul", 5);
    Bureaucrat mike("Mike", 100);
    std::cout << paul << std::endl;
    std::cout << mike << std::endl;

    std::cout << std::endl << "=> Create 2 Form" << std::endl;
    Form number1("Number1", 10, 25);
    Form number2("Number2", 20, 40);
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;

    std::cout << std::endl << "=> Mike tries to sign but his level is too low" << std::endl;
    mike.signForm(number1);
    mike.signForm(number2);

    std::cout << std::endl << "=> Paul sign" << std::endl;
    paul.signForm(number1);
    paul.signForm(number2);

    std::cout << std::endl << "=> Paul tries to sign but form already signed" << std::endl;
    paul.signForm(number1);
    std::cout << std::endl;
}

int main()
{
    basicTest();
    std::cout << std::endl << std::endl;
    testCreateWithInvalidGrade();
    std::cout << std::endl << std::endl;
    testCreateWithValidGrade();
    std::cout << std::endl << std::endl;
    testIncrementGrade();
    std::cout << std::endl << std::endl;
    testDecrementGrade();
    std::cout << std::endl << std::endl;
    testSign();  
    return 0;
}