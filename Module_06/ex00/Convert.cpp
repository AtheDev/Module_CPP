/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:53:36 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/30 22:53:39 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string stdValue, char * value): _type(0), _sign(0), _dec(0) {

    if (this->_checkValue(stdValue, value) == 1)
        throw Convert::ExceptionConvert();
    this->_printChar();
    this->_printInt();
    this->_printFloat();
    this->_printDouble();
}

Convert::~Convert(void) {
    
}

double      Convert::getValue(void) const {

    return this->_value;
}

bool        Convert::_checkValue(std::string stdValue, char * value) {

    if (strlen(value) == 1 && !isdigit(value[0]))
    {
        this->_type = T_CHAR;
        this->_value = static_cast<double>(value[0]);
    }
    else
    {
        char *  pEnd;
        std::string tmpV;
        this->_value = strtod(value, &pEnd);
        if (!pEnd || !(*pEnd))
        {
            this->_type = T_INT;
            for (std::size_t i = 0; i < stdValue.length(); i++)
                if (value[i] == '.')
                {
                    this->_type = T_DOUBLE;
                    this->_checkDec(stdValue, value, '\0', ++i);
                }
            this->_checkSign(value, tmpV);
            if (tmpV.compare("nan") == 0 || tmpV.compare("inf") == 0)
                this->_type = T_PSEUDO;
        }
        else
        {
            if (pEnd[0] != 'f' || (pEnd[0] == 'f' && pEnd[1] != '\0'))
                return 1;
            this->_type = T_FLOAT;
            for (std::size_t i = 0; i < stdValue.length(); i++)
                if (value[i] == '.')
                {
                    this->_type = T_FLOAT_POINT;
                    this->_checkDec(stdValue, value, 'f', ++i);
                }
            this->_checkSign(value, tmpV);
            if (tmpV.compare("nanf") == 0 || tmpV.compare("inff") == 0)
                this->_type = T_FLOAT_PSEUDO;
        }
        if (this->_sign != 0 && (tmpV.compare("nan") == 0 || tmpV.compare("nanf") == 0))
            return 1;
        if (this->_sign == 0 && (tmpV.compare("inf") == 0 || tmpV.compare("inff") == 0))
            return 1;
    }
    return 0;
}

void            Convert::_checkDec(std::string stdValue, char * value, char c, std::size_t i) {

    for (; i < stdValue.length(); i++)
    {
        if (value[i] == c)
            break;
        if (value[i] != '0')
        {
            this->_dec = 1;
            break;
        }
    }
}

void            Convert::_checkSign(char * value, std::string &tmpV) {

    if (value[0] == '-')
        this->_sign = MINUS;
    else if (value[0] == '+')
        this->_sign = PLUS;
    int s = 0;
    if (this->_sign != 0)
        s = 1;
    tmpV = value + s;
}

const char *    Convert::ExceptionConvert::what() const throw() {

    return ("Argument is not a string representation of a C++ literal value.");
}

void        Convert::_printChar(void) const {

    std::cout << "char: ";
    if (this->_type == T_PSEUDO || this->_type == T_FLOAT_PSEUDO
        || static_cast<int>(this->getValue()) < CHAR_MIN || static_cast<int>(this->getValue()) > CHAR_MAX)
        std::cout << "impossible" << std::endl;
    else if (static_cast<char>(this->getValue()) < 32 || static_cast<char>(this->getValue()) > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(this->getValue()) << "'" << std::endl;
}

void        Convert::_printInt(void) const {

    std::cout << "int: ";
    if (this->_type == T_PSEUDO || this->_type == T_FLOAT_PSEUDO
        || static_cast<long>(this->getValue()) < INT_MIN || static_cast<long>(this->getValue()) > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(this->getValue()) << std::endl;

}

void        Convert::_printFloat(void) const {

    std::cout << "float: ";
    if (this->_type == T_INT || this->_type == T_CHAR || this->_type == T_FLOAT)
    {
        if (static_cast<float>(this->getValue()) < -FLT_MAX || static_cast<float>(this->getValue()) > FLT_MAX)
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<float>(this->getValue()) << ".0f" << std::endl;
    }
    else
    {
        if ((this->_type == T_PSEUDO || this->_type == T_FLOAT_PSEUDO) && this->_sign == PLUS)
            std::cout << "+";
        if ((static_cast<float>(this->getValue()) < -FLT_MAX || static_cast<float>(this->getValue()) > FLT_MAX)
            && (this->_type != T_PSEUDO && this->_type != T_FLOAT_PSEUDO))
            std::cout << "impossible" << std::endl;
        else if (this->_dec == 0 && (this->_type != T_PSEUDO && this->_type != T_FLOAT_PSEUDO))
            std::cout << static_cast<float>(this->getValue()) << ".0f" << std::endl;
        else
            std::cout << static_cast<float>(this->getValue()) << "f" << std::endl;
    }
}

void        Convert::_printDouble(void) const {

    std::cout << "double: ";
    if (this->_type == T_INT || this->_type == T_CHAR || this->_type == T_FLOAT)
    {
        if (this->getValue() < -DBL_MAX || this->getValue() > DBL_MAX)
            std::cout << "impossible" << std::endl;
        else
            std::cout << this->getValue() << ".0" << std::endl;
    }
    else
    {
        if ((this->_type == T_PSEUDO || this->_type == T_FLOAT_PSEUDO) && this->_sign == PLUS)
            std::cout << "+";
        if ((this->getValue() < -DBL_MAX || this->getValue() > DBL_MAX) && (this->_type != T_PSEUDO && this->_type != T_FLOAT_PSEUDO))
            std::cout << "impossible" << std::endl;
        else if (this->_dec == 0 && (this->_type != T_PSEUDO && this->_type != T_FLOAT_PSEUDO))
            std::cout << this->getValue() << ".0" << std::endl;
        else
            std::cout << this->getValue() << std::endl;
    }
}