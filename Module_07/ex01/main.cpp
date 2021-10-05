/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:16:52 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 10:16:55 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    printInt(int i)
{
    std::cout << "i = " << i << std::endl;
}

void    printChar(char c)
{
    std::cout << "c = " << c << std::endl;
}

void    printString(std::string str)
{
    std::cout << "str = " << str << std::endl;
}

class Test {
    public:
        Test(int num): _num(num) {}
        ~Test(void) {}

        Test &  operator+=(int num) {this->_num += num; return *this;};
        int     getNum(void) const {return this->_num;}

    private:
        int _num;
};

std::ostream    &   operator<<(std::ostream & os, Test const & rhs) {os << rhs.getNum(); return os;};

void    printTest(Test &t)
{
    std::cout << "t._num = " << t.getNum() << std::endl;
}

int main()
{
    std::cout << "********** Test TAB_INT **********" << std::endl;
    int tabInt[4] = {5, 2, 98, 56};
    iter(tabInt, 4, printInt);
    iter(tabInt, 4, add<int>);
    iter(tabInt, 4, printInt);

    std::cout << std::endl << "********** Test TAB_CHAR **********" << std::endl;
    char tabChar[4] = {'a', 'f', 'p', 'v'};
    iter(tabChar, 4, printChar);
    iter(tabChar, 4, add<char>);
    iter(tabChar, 4, printChar);

    std::cout << std::endl << "********** Test TAB_STRING **********" << std::endl;
    std::string tabString[4] = {"Hello !", "String", "Who am I?", "Last element"};
    iter(tabString, 4, printString);
    iter(tabString, 4, deleteChar<std::string>);
    iter(tabString, 4, printString);

    std::cout << std::endl << "********** Test TAB_CLASS **********" << std::endl;
    Test    tabClass[4] = {6, 456, 0, -54};
    iter(tabClass, 4, printTest);
    iter(tabClass, 4, add<Test>);
    iter(tabClass, 4, printTest);
    return 0;
}