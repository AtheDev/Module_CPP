/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:58:04 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/05 20:00:26 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>		// std::cout
#include <string>		// std::string
#include <cctype>		// int toupper(int c);

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	else
	{
		int	count(0);
		while (++count < argc)
		{
			std::string	str = argv[count];
			for (std::string::size_type i = 0; i < str.length(); ++i)
				str[i] = toupper(str[i]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
}
