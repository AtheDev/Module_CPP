/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:59:17 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/04 17:59:19 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

Base *  generate(void)      // génère aléatoirement une instance A ou B ou C
{

    srand(time(NULL));
    int num = rand() % 3;
    if (num == 0)
        return new A();
    else if (num == 1)
        return new B();
    else
        return new C();
}

void    identify(Base * p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void    identify(Base & p)
{
    try
    {
        A & a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception & e)
    {

    }

    try
    {
        B & b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception & e)
    {

    }

    try
    {
        C & c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception & e)
    {

    }
}

int main()
{
    Base *  test1 = generate();
    identify(test1);
    identify(*test1);
    delete  test1;
    return 0;
}