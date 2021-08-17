/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:32:09 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/17 14:50:50 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"


void	commandSearch(Phonebook phonebook)
{
	if (Contact::getNbContact() != 0)
	{
		std::string	sIndex;
		int			iIndex;
		phonebook.searchContact();
		std::cout << std::endl
			<< "\033[34mSaisissez l'index du contact à visualiser : \033[37m";
		std::getline(std::cin, sIndex);
		while ((iIndex = phonebook.setIndex(sIndex)) == -1)
		{
			std::cout << std::endl
				<< "\033[31mVeuillez saisir un index correct : \033[37m";
			std::getline(std::cin, sIndex);
		}
		phonebook.printContact(iIndex);
	}
	else
		std::cout << std::endl << "\033[31mRecherche impossible, "
			<< "votre annuaire est actuellement vide.\033[37m"
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
			<< "\033[31mVous ne pouvez plus ajouter de contact, "
			<< "votre annuaire est complet.\033[37m" << std::endl;
}

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
	{
		Phonebook	phonebook;
		std::string	input;
		std::cout << "\033[32m********** Bienvenue dans mon PHONEBOOK ! **********\033[37m"
			<< std::endl;
		do {
			std::cout << std::endl
				<< "\033[34mVeuillez saisir une commande parmis "
				<< "ADD / SEARCH / EXIT :\033[37m"
				<< std::endl;
			std::getline(std::cin, input);
			if (phonebook.setInput(input) == 2)
				commandAdd(phonebook);
			else if (phonebook.setInput(input) == 3)
				commandSearch(phonebook);
			else if (phonebook.setInput(input) == 0)
				std::cout << std::endl
					<< "\033[31mMauvaise commande!\033[37m" << std::endl;
		} while (phonebook.setInput(input) != 1);
		std::cout << std::endl
			<< "\033[32mTous vos contacts sont supprimés. A bientôt !\033[37m"
			<< std::endl;
	}
	else
		std::cerr << "\033[31mTrop d'argument!\033[37m" << std::endl;
	return 0;
}
