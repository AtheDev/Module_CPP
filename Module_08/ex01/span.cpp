/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:09:02 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/07 20:09:09 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {

}

Span::Span(unsigned int N): _nbInt(N), _vect(0) {

}

Span::Span(Span const & cpy) {

    *this = cpy;
}

Span::~Span(void) {

}

Span const &    Span::operator=(Span const & rhs) {

    if (this != &rhs)
    {
        std::vector<int>::const_iterator  it = rhs._vect.begin();
        std::vector<int>::const_iterator  ite = rhs._vect.end() - 1;
        this->_vect.assign(it, ite);
        this->_nbInt = rhs._nbInt;
    }
    return *this;
}

void            Span::addNumber(int store) {

    try
    {
        if (this->getNbInt() <= this->getVect().size())
            throw Span::StorageLimitReached();
        this->_vect.push_back(store);
    }
    catch (Span::StorageLimitReached & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void        Span::addNumber(std::vector<int>::iterator  it, std::vector<int>::iterator  ite) {

    try
    {
        for (; it != ite; it++)
        {
            if (this->getNbInt() <= this->getVect().size())
                throw Span::StorageLimitReached();
            this->_vect.push_back(*it);
        }
    }
    catch (Span::StorageLimitReached & e)
    {
        std::cout << e.what() << std::endl;
    }
}

int       Span::shortestSpan(void) const {

    if (this->getVect().size() <= 1)
        throw Span::NoNumberOrOnlyOne();

    std::vector<int>::const_iterator  it = this->_vect.begin();
    std::vector<int>::const_iterator  ite = this->_vect.end();

    std::vector<int>    tmp;
    tmp.assign(it, ite);
    std::sort (tmp.begin(), tmp.end());

    std::vector<int>::iterator  itT = tmp.begin();
    std::vector<int>::iterator  iteT = tmp.end();
    int ret = (*(itT + 1)) - *itT;
    itT++;
    for (;itT != (iteT - 1); itT++)
    {
        if (ret > ((*(itT + 1)) - *itT))
            ret = (*(itT + 1)) - *itT;
    }
    return ret;
}

int       Span::longestSpan(void) const {

    if (this->getVect().size() <= 1)
        throw Span::NoNumberOrOnlyOne();

    std::vector<int>::const_iterator  it = this->_vect.begin();
    std::vector<int>::const_iterator  ite = this->_vect.end();

    std::vector<int>    tmp;
    tmp.assign(it, ite);
    std::sort (tmp.begin(), tmp.end());

    std::vector<int>::iterator  itT = tmp.begin();
    std::vector<int>::iterator  iteT = tmp.end();
    int ret = (*(iteT - 1)) - *itT;

    return ret;
}


// Getter
unsigned int    Span::getNbInt(void) const {

    return this->_nbInt;
}

std::vector<int>  Span::getVect(void) const {

    return this->_vect;
}

// Exception
const char *    Span::StorageLimitReached::what() const throw() {

    return ("Exception : Storage Limit Reached");
}

const char *    Span::NoNumberOrOnlyOne::what() const throw() {

    return ("Exception : No range found because not enough numbers");
}

// Overload
std::ostream &      operator<<(std::ostream & os, Span const & sp) {

    os << "Span : _nbInt = " << sp.getNbInt()
        << " , _vector.empty() = " << sp.getVect().empty()
        << " , _vector.size() = " << sp.getVect().size()
        << ", Vector content = ";

    std::vector<int> tmp = sp.getVect();
    std::vector<int>::iterator it = tmp.begin();
    std::vector<int>::iterator ite = tmp.end();
    for (; it != ite; it++)
        os << *it << " ";
    
    return os;
}