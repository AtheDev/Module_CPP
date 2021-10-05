/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:53:23 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 12:53:25 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void    testArrayInt(void)
{
    std::cout << "********** Test ARRAY_INT **********" << std::endl;

    std::cout << "==> Default constructor" << std::endl;
    Array<int> d;
    std::cout << "d.size() = " << d.size() << std::endl;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < d.size(); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (d.size() + 1); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Constructor with parameter" << std::endl;
    Array<int> a(4);
    std::cout << "a.size() = " << a.size() << std::endl;
    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = i;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (a.size() + 1); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Copy constructor" << std::endl;
    Array<int>  a_cpy(a);
    std::cout << "a_cpy.size() = " << a_cpy.size() << std::endl;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a_cpy.size(); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
        std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; (i < a_cpy.size() + 1); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }
}

void    testArrayString(void)
{
    static  std::string tab[4] = {"one", "two", "three", "four"};

    std::cout << "********** Test ARRAY_STRING **********" << std::endl;

    std::cout << "==> Default constructor" << std::endl;
    Array<std::string> d;
    std::cout << "d.size() = " << d.size() << std::endl;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < d.size(); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (d.size() + 1); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Constructor with parameter" << std::endl;
    Array<std::string> a(4);
    std::cout << "a.size() = " << a.size() << std::endl;
    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = tab[i];
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (a.size() + 1); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Copy constructor" << std::endl;
    Array<std::string>  a_cpy(a);
    std::cout << "a_cpy.size() = " << a_cpy.size() << std::endl;
    try
    {
        std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a_cpy.size(); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; (i < a_cpy.size() + 1); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }
}

void    testArrayChar(void)
{
    std::cout << "********** Test ARRAY_CHAR **********" << std::endl;

    std::cout << "==> Default constructor" << std::endl;
    Array<char> d;
    std::cout << "d.size() = " << d.size() << std::endl;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < d.size(); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (d.size() + 1); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Constructor with parameter" << std::endl;
    Array<char> a(4);
    std::cout << "a.size() = " << a.size() << std::endl;
    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = 65 + i;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
       std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; i < (a.size() + 1); i++)
            std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }

    std::cout << std::endl << "==> Copy constructor" << std::endl;
    Array<char>  a_cpy(a);
    std::cout << "a_cpy.size() = " << a_cpy.size() << std::endl;
    try
    {
       std::cout << "Without out of range" << std::endl;
        for (unsigned int i = 0; i < a_cpy.size(); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
        std::cout << std::endl << "With out of range" << std::endl;
        for (unsigned int i = 0; (i < a_cpy.size() + 1); i++)
            std::cout << "a_cpy[" << i << "] = " << a_cpy[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Out of range : " << e.what() << std::endl;
    }
}

int main()
{
    testArrayInt();
    std::cout << std::endl;
    testArrayString();
    std::cout << std::endl;
    testArrayChar();
    return 0;
}