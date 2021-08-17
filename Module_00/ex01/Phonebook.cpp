/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:22:05 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/17 14:51:06 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>
#include <sstream>

Phonebook::Phonebook(void) {

	// Construction d'une instance Phonebook de la class Phonebook
}

Phonebook::~Phonebook(void) {

	// Destruction d'une instance Phonebook de la class Phonebook
}

int		Phonebook::setInput(std::string str) const{

	if (!str.compare("EXIT"))
		return 1;
	if (!str.compare("ADD"))
		return 2;
	if (!str.compare("SEARCH"))
		return 3;
	return 0;
}

int		Phonebook::setIndex(std::string str) const {

	if (str.size() != 1)
		return (-1);
	if (str.find_first_not_of("12345678") != std::string::npos)
		return (-1);
	std::istringstream	is(str);
	int	myInt;
	is >> myInt;
	if ( myInt > Contact::getNbContact() || myInt <= 0)
		return (-1);
	return (myInt);
}

void	Phonebook::addContact(int index) {

	std::cout << std::endl
		<< "\033[36mCréation d'un contact, veuillez renseigner les différents champs."
		<< std::endl << "ATTENTION les 3 premiers champs sont obligatoires.\033[37m"
		<< std::endl  << "\033[33m-> First name : \033[37m";

	std::string	input;
	getline(std::cin, input);
	while (this->_tableContact[index - 1].setFirstName(input) == 1)
		getline(std::cin, input);

	std::cout << "\033[33m-> Last name : \033[37m";
	getline(std::cin, input);
	while (this->_tableContact[index - 1].setLastName(input) == 1)
		getline(std::cin, input);

	std::cout << "\033[33m-> Nickname : \033[37m";
	getline(std::cin, input);
	while (this->_tableContact[index - 1].setNickname(input) == 1)
		getline(std::cin, input);

	std::cout << "\033[33m-> Phone number : \033[37m";
	getline(std::cin, input);
	while (this->_tableContact[index - 1].setPhoneNumber(input) == 1)
		getline(std::cin, input);

	std::cout << "\033[33m-> Darkest secret : \033[37m";
	getline(std::cin, input);
	this->_tableContact[index - 1].setDarkestSecret(input);
}

void	Phonebook::_printFieldContact(std::string str) const {

		if (str.size() > 10)
			std::cout << str.substr(0,9) << ".";
		else
		{
			std::cout.width(10);
			std::cout << str;
		}
}

void	Phonebook::searchContact(void) const {

	std::cout << std::endl
		<< "\033[35mINDEX     |FIRST NAME|LAST NAME |NICKNAME  "
		<< std::endl
		<< "-------------------------------------------\033[37m"
		<< std::endl;

	for (int i = 0; i < Contact::getNbContact(); i++)
	{
		std::cout.width(10);
		std::cout << std::left << i + 1;
		std::cout << "\033[35m|\033[37m";

		_printFieldContact(this->_tableContact[i].getFirstName());
		std::cout << "\033[35m|\033[37m";

		_printFieldContact(this->_tableContact[i].getLastName());
		std::cout << "\033[35m|\033[37m";

		_printFieldContact(this->_tableContact[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	Phonebook::printContact(int index) const {

	std::cout << std::endl
		<< "\033[36mVoici les coordonnées du contact choisi :\033[37m" << std::endl;
	std::cout << "\033[33m- First name : \033[37m"
		<< this->_tableContact[index - 1].getFirstName() << std::endl;
	std::cout << "\033[33m- Last name : \033[37m"
		<< this->_tableContact[index - 1].getLastName() << std::endl;
	std::cout << "\033[33m- Nickname : \033[37m"
		<< this->_tableContact[index - 1].getNickname() << std::endl;
	std::cout << "\033[33m- Phone number : \033[37m"
		<< this->_tableContact[index - 1].getPhoneNumber() << std::endl;
	std::cout << "\033[33m- Darkest secret : \033[37m"
		<< this->_tableContact[index - 1].getDarkestSecret() << std::endl
		<< std::endl;
}
