/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:24:37 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/09 14:24:39 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <string>
#include <list>

int main()
{
    {
        std::cout << "**************************************" << std::endl;
        std::cout << "********** Test MutantStack **********" << std::endl;
        std::cout << "**************************************" << std::endl << std::endl;
        MutantStack<int> mstack;

        std::cout << "==> Add item to the stack" << std::endl;
        mstack.push(5);
        mstack.push(17);

        std::cout << "==> Display of the item at the top of the stack" << std::endl;
        std::cout << mstack.top() << std::endl;

        std::cout << "==> Use of the pop() function which removes the element from the top of the stack" << std::endl;
        mstack.pop();

        std::cout << "==> Display of the item at the top of the stack" << std::endl;
        std::cout << mstack.top() << std::endl;

        std::cout << "==> Display size of the stack" << std::endl;
        std::cout << mstack.size() << std::endl;

        std::cout << "==> Add item to the stack" << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        std::cout << "==> Implementation of an iterator system and content display" << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::cout << "==> Test with copy constructor" << std::endl;
        std::stack<int> s(mstack);
    }
    std::cout << std::endl << std::endl;
    {
        std::cout << "*******************************" << std::endl;
        std::cout << "********** Test List **********" << std::endl;
        std::cout << "*******************************" << std::endl << std::endl;
        std::list<int> lst;

        std::cout << "==> Add item to the list" << std::endl;
        lst.push_back(5);
        lst.push_back(17);

        std::cout << "==> Display of the last item at the list" << std::endl;
        std::cout << lst.back() << std::endl;

        std::cout << "==> Use of the pop_back() function which removes the last element of the list" << std::endl;
        lst.pop_back();

        std::cout << "==> Display of the last item at the list" << std::endl;
        std::cout << lst.back() << std::endl;

        std::cout << "==> Display size of the list" << std::endl;
        std::cout << lst.size() << std::endl;

        std::cout << "==> Add item to the list" << std::endl;
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);

        std::cout << "==> Implementation of an iterator system and content display" << std::endl;
        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();

        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::cout << "==> Test with copy constructor" << std::endl;
        std::list<int> s(lst);
    }
    return  0;
}