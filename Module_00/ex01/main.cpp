/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:32:09 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/27 14:42:03 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"


void	commandSearch(Phonebook phonebook)
{
	if (Contact::getNbContact() != 0)
	{
		std::string	sIndex;
		int			iIndex;
		phonebook.searchContact();
		std::cout << std::endl
			<< "\033[34mEnter the index of the contact to be viewed : \033[37m";
		std::getline(std::cin, sIndex);
		while ((iIndex = phonebook.setIndex(sIndex)) == -1)
		{
			std::cout << std::endl
				<< "\033[31mPlease enter a correct index : \033[37m";
			std::getline(std::cin, sIndex);
		}
		phonebook.printContact(iIndex);
	}
	else
		std::cout << std::endl << "\033[31mSearch not possible, "
			<< "your directory is currently empty.\033[37m"
			<< std::endl;
}

void	commandAdd(Phonebook &phonebook)
{
	if (Contact::getNbContact() != 8)
	{
		Contact::setNbContact();
		phonebook.addContact(Contact::getNbContact());
	}
	else
		std::cout << std::endl
			<< "\033[31mYou cannot add any more contacts, "
			<< "your directory is full.\033[37m" << std::endl;
}

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
	{
		Phonebook	phonebook;
		std::string	input;
		std::cout << "\033[32m********** Welcome in my PHONEBOOK ! **********\033[37m"
			<< std::endl;
		do {
			std::cout << std::endl
				<< "\033[34mPlease enter one of the following commands "
				<< "ADD / SEARCH / EXIT :\033[37m"
				<< std::endl;
			std::getline(std::cin, input);
			if (phonebook.setInput(input) == 2)
				commandAdd(phonebook);
			else if (phonebook.setInput(input) == 3)
				commandSearch(phonebook);
			else if (phonebook.setInput(input) == 0)
				std::cout << std::endl
					<< "\033[31mWrong command!\033[37m" << std::endl;
		} while (phonebook.setInput(input) != 1);
		if (Contact::getNbContact() != 0)
			std::cout << std::endl << "\033[32mAll your contacts are deleted. \033[37m";
		std::cout << "\033[32mSee you soon!\033[37m" << std::endl;
	}
	else
		std::cerr << "\033[31mToo many arguments!\033[37m" << std::endl;
	return 0;
}
