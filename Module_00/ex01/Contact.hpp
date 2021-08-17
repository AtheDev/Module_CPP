/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:41:18 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/17 17:42:28 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class	Contact {

	public:

		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		int			setFirstName(std::string str);

		std::string	getLastName(void) const;
		int			setLastName(std::string str);

		std::string	getNickname(void) const;
		int			setNickname(std::string str);

		std::string	getPhoneNumber(void) const;
		int			setPhoneNumber(std::string str);

		std::string	getDarkestSecret(void) const;
		void		setDarkestSecret(std::string str);


		static int	getNbContact(void);
		static void	setNbContact(void);

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		static int	_nbContact;
};

#endif
