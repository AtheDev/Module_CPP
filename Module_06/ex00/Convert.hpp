/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:53:43 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/30 22:53:45 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cfloat>

class   Convert {

    public:

        enum Type {T_CHAR = 1, T_INT, T_FLOAT, T_DOUBLE, T_PSEUDO, T_FLOAT_POINT, T_FLOAT_PSEUDO};
        enum Sign {MINUS = 1, PLUS};

        Convert(std::string stdValue, char * value);
        ~Convert(void);

        double      getValue(void) const;

    class   ExceptionConvert : public std::exception {

        public:

            virtual const char *    what() const throw();
    };


    private:

        Convert(void);
        Convert(Convert const & cpy);
        Convert &   operator=(Convert const & rhs);

        double      _value;
        int         _type;
        int         _sign;
        bool        _dec;

        bool        _checkValue(std::string stdValue, char * value);
        void        _checkDec(std::string stdValue, char * value, char c, std::size_t i);
        void        _checkSign(char * value, std::string &tmpV);
        void        _printChar(void) const;
        void        _printInt(void) const;
        void        _printFloat(void) const;
        void        _printDouble(void) const;

};

#endif