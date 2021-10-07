/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:10:46 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/04 21:10:48 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>

class Test {
    public:
        Test(int num): _num(num) {}
        ~Test(void) {}

		bool	operator>=(Test const & rhs) const {return (this->_num >= rhs._num);}
		bool	operator<=(Test const & rhs) const {return (this->_num <= rhs._num);}

        int     getNum(void) {return this->_num;}

    private:
        int _num;
};

int main()
{
    std::cout << "********** Type INT **********" << std::endl;
    int a = 2;
    int b = 3;

    std::cout << "==> Before SWAP :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "==> After SWAP :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << std::endl << "********** Type STRING **********" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "==> Before SWAP :" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "==> After SWAP :" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << std::endl << "********** Type CHAR**********" << std::endl;
    char e = 'a';
    char f = 'z';

    std::cout << "==> Before SWAP :" << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    ::swap( e, f );
    std::cout << "==> After SWAP :" << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    std::cout << std::endl << "********** Type FLOAT **********" << std::endl;
    float g = 1.66f;
    float h = 1.67f;

    std::cout << "==> Before SWAP :" << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    ::swap(g, h);
    std::cout << "==> After SWAP :" << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

    std::cout << std::endl << "********** Type CLASS **********" << std::endl;
    Test i(10);
    Test j(25);

    std::cout << "==> Before SWAP :" << std::endl;
    std::cout << "i = " << i.getNum() << ", j = " << j.getNum() << std::endl;
    ::swap(i, j);
    std::cout << "==> After SWAP :" << std::endl;
    std::cout << "i = " << i.getNum() << ", j = " << j.getNum() << std::endl;
    std::cout << "min( i, j ) = " << ::min( i.getNum(), j.getNum()) << std::endl;
    std::cout << "max( i, j ) = " << ::max( i.getNum(), j.getNum()) << std::endl;

    return 0;
}