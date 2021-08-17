/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:41:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/17 14:51:15 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

	// Constructon d'une instance Contact de la class Contact
}

Contact::~Contact(void) {

	// Destruction d'une l'instance Contact de a classe Contact
}


// First name
std::string	Contact::getFirstName(void) const {

	return this->_firstName;
}

int		Contact::setFirstName(std::string str) {

	if (str.empty() ||
		(str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mVeuillez remplir ce champ !\033[37m"
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
		(str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mVeuillez remplir ce champ !\033[37m"
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
		(str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_-")
		 == std::string::npos))
	{
		std::cout << "\033[31mVeuillez remplir ce champ !\033[37m"
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
		std::cout << "\033[31mVotre numéro de téléphone ne doit comporter que "
			<< "des chiffres sinon laissez le champ vide.\033[37m"
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


// Nombre de contact
int	Contact::getNbContact(void) {

	return Contact::_nbContact;
}

void	Contact::setNbContact(void) {

	Contact::_nbContact += 1;
}

int	Contact::_nbContact = 0;
