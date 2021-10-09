/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:25:01 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/09 14:25:03 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template <typename T>
class   MutantStack : public std::stack<T> {

    public:

        MutantStack(void): std::stack<T>::stack() {}
        MutantStack(MutantStack const & cpy) {*this = cpy;}
        ~MutantStack(void) {}

        MutantStack &   operator=(MutantStack const & rhs) {
            if (this != &rhs)
                std::stack<T>::operator=(rhs);
            return *this;
        }
        
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator    begin(void) {return this->c.begin();}
        iterator    end(void) {return this->c.end();}
};

#endif