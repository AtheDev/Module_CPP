/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:53:34 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 12:53:35 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <typename T>
class   Array {

    public:

        Array(void): _size(0), _array(new T[_size]) {}
        Array(unsigned int n): _size(n), _array(new T[_size]) {}
        Array(Array const & cpy):_size(0), _array(new T[_size]) {
            *this = cpy;
        }
        Array & operator=(Array const & rhs) {
            if (this != &rhs)
            {
                delete [] this->_array;
                this->_array = new T[rhs.size()];
                for (unsigned int i = 0; i < rhs.size(); i++)
                    this->_array[i] = rhs._array[i];
                this->_size = rhs.size();
            }
            return *this;
        }
        ~Array(void) {
            delete [] this->_array;
        }

        unsigned int    size(void) const{

            return this->_size;
        }

        T & operator[](unsigned int i) const {

            if (i >= this->size() || i < 0)
                throw std::exception();
            return this->_array[i];
        }

    private:

        unsigned int    _size;
        T *             _array;
};

#endif