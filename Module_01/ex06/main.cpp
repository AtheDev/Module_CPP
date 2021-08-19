/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:24:38 by adupuy            #+#    #+#             */
/*   Updated: 2021/08/19 18:48:36 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac > 2 || ac == 1)
	{
		std::cerr << "Error: use the program like this ==> ./karenFilter <LEVEL>"
			<< std::endl;
		return (1);
	}

	Karen	karen;
	karen.complain(av[1]);

	return (0);
}
