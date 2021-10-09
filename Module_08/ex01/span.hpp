/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:08:53 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/07 20:08:55 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>

class   Span {

    public:

        Span(void);
        Span(unsigned int N);
        Span(Span const & cpy);
        ~Span(void);

        Span const &    operator=(Span const & rhs);

        void                addNumber(int store);
        void                addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);

        int                 shortestSpan(void) const;
        int                 longestSpan(void) const;

        unsigned int        getNbInt(void) const;
        std::vector<int>    getVect(void) const;

        class   StorageLimitReached : public std::exception {

            public:
                virtual const char * what() const throw();
        };

        class   NoNumberOrOnlyOne : public std::exception {

            public:
                virtual const char * what() const throw();
        };

    private:

        unsigned int        _nbInt;
        std::vector<int>    _vect;




};

std::ostream &      operator<<(std::ostream & os, Span const & sp);

#endif