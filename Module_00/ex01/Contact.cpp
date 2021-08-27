/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:41:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/27 14:15:53 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}


// First name
std::string	Contact::getFirstName(void) const {

	return this->_firstName;
}

int		Contact::setFirstName(std::string str) {

	if (str.empty() ||
		(str.find_first_of(
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mPlease fill in this field !\033[37m"
			<< std::endl << "\033[33m-> First name : \033[37m";
		return (1);
	}
	else
		this->_firstName = str;
	return (0);
}


// Last namme
std::string	Contact::getLastName(void) const {

	return this->_lastName;
}

int		Contact::setLastName(std::string str) {

	if (str.empty() ||
		(str.find_first_of(
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mPlease fill in this field !\033[37m"
			<< std::endl << "\033[33m-> Last name : \033[37m";
		return (1);
	}
	else
		this->_lastName = str;
	return (0);
}


// Nickname
std::string	Contact::getNickname(void) const {

	return this->_nickname;
}

int	Contact::setNickname(std::string str) {

	if (str.empty() ||
		(str.find_first_of(
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mPlease fill in this fild !\033[37m"
			<< std::endl << "\033[33m-> Nickname : \033[37m";
		return (1);
	}
	else
		this->_nickname = str;
	return (0);
}


// Phone number
std::string	Contact::getPhoneNumber(void) const {

	return this->_phoneNumber;
}

int	Contact::setPhoneNumber(std::string str) {

	if (str.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "\033[31mYour phone number must be in digits only "
			<< "or leave the field blank.\033[37m"
			<< std::endl << "\033[33m-> Phone number : \033[37m";
		return (1);
	}
	else
		this->_phoneNumber = str;
	return (0);
}


// Darkest secret
std::string	Contact::getDarkestSecret(void) const {

	return this->_darkestSecret;
}

void	Contact::setDarkestSecret(std::string str) {

	this->_darkestSecret = str;
}


// Number of contact
int	Contact::getNbContact(void) {

	return Contact::_nbContact;
}

void	Contact::setNbContact(void) {

	Contact::_nbContact += 1;
}

int	Contact::_nbContact = 0;
