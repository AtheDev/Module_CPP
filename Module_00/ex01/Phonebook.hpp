/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:22:03 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/10 10:41:15 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <sstream>

class	Phonebook {

	public:

		Phonebook(void);
		~Phonebook(void);

		int		setInput(std::string str) const;
		int		setIndex(std::string str) const;
		void	addContact(int	index);
		void	searchContact(void) const;
		void	printContact(int index) const;

	private:

		Contact		_tableContact[8];

		void	_printFieldContact(std::string str) const;

};

#endif
