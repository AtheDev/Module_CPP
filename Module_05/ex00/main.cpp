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
    std::cout << "********** BASIC TEST **********" << std::endl; 

    Bureaucrat  bob;
    Bureaucrat  jack("Jack");
    Bureaucrat  mike("Mike", 4);
    Bureaucrat  john(mike);
    Bureaucrat  paul;
    paul = mike;

    std::cout << std::endl;

    std::cout << bob;
    std::cout << jack;
    std::cout << mike;
    std::cout << john;
    std::cout << paul;

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
    std::cout << "********** TEST WITH VALIDE GRADE **********" << std::endl;

    createBureaucrat("Bob", 3);
    createBureaucrat("Jack", 150);
    createBureaucrat("Mike", 1);
}

void    testCreateWithInvalidGrade()
{
    std::cout << "********** TEST WITH INVALIDE GRADE **********" << std::endl;

    createBureaucrat("Bob", 0);
    createBureaucrat("Jack", 345);
    createBureaucrat("Mike", -45);
}

void    testIncrementGrade()
{
    std::cout << "********** TEST INCREMENT GRADE **********" << std::endl;

    Bureaucrat paul("Paul", 10);
    std::cout << paul;
    std::cout << std::endl << "=> Use the incrementGrade() function x1" << std::endl;
    paul.incrementGrade();
    std::cout << paul;

    std::cout << std::endl << "=> Use the incrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.incrementGrade();
    std::cout << paul;

    std::cout << std::endl << "=> Create Bureaucrat by copy" << std::endl;
    Bureaucrat paul_cpy(paul);
    std::cout << paul_cpy;

    std::cout << std::endl << "=> Use the incrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.incrementGrade();

    std::cout << paul;   
    std::cout << paul_cpy;
    std::cout << std::endl;
}

void    testDecrementGrade()
{
    std::cout << "********** TEST DECREMENT GRADE **********" << std::endl;

    Bureaucrat paul("Paul", 140);
    std::cout << paul;
    std::cout << std::endl << "=> Use the decrementGrade() function x1" << std::endl;
    paul.decrementGrade();
    std::cout << paul;

    std::cout << std::endl << "=> Use the decrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.decrementGrade();
    std::cout << paul;

    std::cout << std::endl << "=> Create Bureaucrat by copy" << std::endl;
    Bureaucrat paul_cpy(paul);
    std::cout << paul_cpy;

    std::cout << std::endl << "=> Use the decrementGrade() function x5" << std::endl;
    for (int i = 0; i < 5; i++)
        paul.decrementGrade();

    std::cout << paul;   
    std::cout << paul_cpy;
    std::cout << std::endl;
}

int main()
{
    basicTest();
    std::cout << std::endl;
    testCreateWithInvalidGrade();
    std::cout << std::endl;
    testCreateWithValidGrade();
    std::cout << std::endl;
    testIncrementGrade();
    std::cout << std::endl;
    testDecrementGrade();
    return 0;
}