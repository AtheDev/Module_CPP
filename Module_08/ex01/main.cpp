/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:08:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/07 20:08:41 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <ctime>
#include <cstdlib>

void    displaySort(std::vector<int> & vect)
{
    std::vector<int>::const_iterator  it = vect.begin();
    std::vector<int>::const_iterator  ite = vect.end();

    std::vector<int>    tmp;
    tmp.assign(it, ite);
    std::sort (tmp.begin(), tmp.end());
    for (std::vector<int>::iterator itT = tmp.begin(); itT != tmp.end(); itT++)
        std::cout << *itT << " ";
    std:: cout << std::endl;
}

std::vector<int>    createRandomVector(int nb)
{
    std::vector<int>    vect;
    srand(time(NULL));
    for (int i = 0; i < nb; i++)
        vect.push_back(rand() % 1000);
    return vect;
}

void    basicTest(void)
{
    {
        std::cout << "********** Basic test : size 5 **********" <<std::endl;
        Span sp = Span(5);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp << std::endl;

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "********** Basic test : size 10000 **********" <<std::endl;
        Span sp = Span(10000);
        std::vector<int>    vect = createRandomVector(10000); 

        sp.addNumber(vect.begin(), vect.end());

        //displaySort(vect);

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

void    testAddRange(void)
{
    std::cout << "********** Test add range **********" <<std::endl;
    Span sp = Span(5);
    std::vector<int>    vect = createRandomVector(5);

    sp.addNumber(vect.begin(), vect.end());

    std::cout << sp << std::endl;
    std::cout << "==> Display of the sorting vector" << std::endl;
    displaySort(vect);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    testStorageLimitReached(void)
{
    std::cout << "********** Test storage limit reached **********" <<std::endl;
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(43);

    std::cout << sp << std::endl;

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    testNoNumberOrOnlyOne(void)
{
    std::cout << "********** Test no number **********" <<std::endl;
    {
        Span sp = Span(5);

        std::cout << sp << std::endl;

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }

        try
        {
         std::cout << sp.longestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "********** Test only one number **********" <<std::endl;
        Span sp = Span(5);
        sp.addNumber(43);

        std::cout << sp << std::endl;

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }

        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (Span::NoNumberOrOnlyOne & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

void    testWithParameter(char *av)
{
    std::cout << "********** Test with parameter **********" <<std::endl;
    if (atoi(av) < 0)
    {
        std::cout << "Error: argument must be positive" << std::endl;
        return;
    }
    Span sp = Span(atoi(av));
    std::vector<int>    vect = createRandomVector(atoi(av));

    sp.addNumber(vect.begin(), vect.end());
    sp.addNumber(-2);

    std::cout << sp << std::endl;
    std::cout << "==> Display of the sorting vector" << std::endl;
    displaySort(vect);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (Span::NoNumberOrOnlyOne & e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        testWithParameter(av[1]);
    else
    {
        basicTest();
        std::cout << std::endl;
        testAddRange();
        std::cout << std::endl;
        testStorageLimitReached();
        std::cout << std::endl;
        testNoNumberOrOnlyOne();

    }

    return 0;
}