/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:21:45 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 16:21:46 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void    display(int i)
{
    std::cout << i << " ";
}

int main()
{
    std::cout << "********** Test with Vector Container **********" << std::endl;
    std::vector<int>    container;
    container.push_back(3);
    container.push_back(8);
    container.push_back(1);
    container.push_back(9);
    container.push_back(5);

    std::cout << "Vector container : ";
    for_each(container.begin(), container.end(), display);
    std::cout << std::endl << std::endl;

    try
    {
        std::vector<int>::const_iterator ret = easyfind(container, 8);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    try
    {
        std::vector<int>::const_iterator ret = easyfind(container, 5);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    try
    {
        std::vector<int>::const_iterator ret = easyfind(container, 4);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    std::cout << std::endl << "********** Test with List Container **********" << std::endl;
    std::list<int>  lst;
    lst.push_back(3);
    lst.push_back(8);
    lst.push_back(1);
    lst.push_back(9);
    lst.push_back(5);

    std::cout << "List container : ";
    for_each(lst.begin(), lst.end(), display);
    std::cout << std::endl << std::endl;

    try
    {
        std::list<int>::const_iterator ret = easyfind(lst, 8);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    try
    {
        std::list<int>::const_iterator ret = easyfind(lst, 5);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    try
    {
        std::list<int>::const_iterator ret = easyfind(lst, 4);
        std::cout << "Occurence found => " << *ret << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "No occurences found" << std::endl;
    }

    return 0;
}