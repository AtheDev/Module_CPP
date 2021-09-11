/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:24:37 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/11 09:27:36 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string		string("HI THIS IS BRAIN");
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address string : " << &string << std::endl;
	std::cout << "Address stringPTR : " << &stringPTR << std::endl;
	std::cout << "Address stringREF : " << &stringREF << std::endl;

	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return (0);
}
