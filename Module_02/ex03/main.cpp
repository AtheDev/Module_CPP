/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:40:39 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/13 14:31:38 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const, Point const, Point const, Point const);

int	main()
{
	Point	x1(2.0f, 2.0f);
	Point	x2(6.0f, 8.0f);
	Point	x3(10.0f, 6.0f);
	Point	o1(2.0f, 6.0f);
	Point	o2(4.0f, 5.0f);
	Point	o3(6.5f, 6.0f);
	Point	o4(10.0f, 6.0f);

	std::cout << std::endl;
	std::cout << "	10" << std::endl;
	std::cout << "	|" << std::endl;
	std::cout << "	9" << std::endl;
	std::cout << "	|" << std::endl;
	std::cout << "	8                 x2" << std::endl;
	std::cout << "	|                .   ." << std::endl;
	std::cout << "	7               .       ." << std::endl;
	std::cout << "	|              .           ." << std::endl;
	std::cout << "	6     o1      .     o3        x3-o4" << std::endl;
	std::cout << "	|            .             ." << std::endl;
	std::cout << "	5           o2          ." << std::endl;
	std::cout << "	|          .         ." << std::endl;
	std::cout << "	4         .       ." << std::endl;
	std::cout << "	|        .     ." << std::endl;
	std::cout << "	3       .   ." << std::endl;
	std::cout << "	|      . ." << std::endl;
	std::cout << "	2     x1" << std::endl;
	std::cout << "	|" << std::endl;
	std::cout << "	1" << std::endl;
	std::cout << "	|" << "__ __ __ __ __ __ __ __ __ __" << std::endl;
	std::cout << "	0  1  2  3  4  5  6  7  8  9  10" << std::endl << std::endl;

	std::cout << std::endl << "Test point o1" << std::endl;
	if (bsp(x1, x2, x3, o1) == true)
		std::cout << "The point o1 is inside the triangle" << std::endl;
	else
		std::cout << "The point o1 is outside the triangle" << std::endl;

	std::cout << std::endl << "Test point o2" << std::endl;
	if (bsp(x1, x2, x3, o2) == true)
		std::cout << "The point o2 is inside the triangle" << std::endl;
	else
		std::cout << "The point o2 is outside the triangle" << std::endl;

	std::cout << std::endl << "Test point o3" << std::endl;
	if (bsp(x1, x2, x3, o3) == true)
		std::cout << "The point o3 is inside the triangle" << std::endl;
	else
		std::cout << "The point o3 is outside the triangle" << std::endl;

	std::cout << std::endl << "Test point o4" << std::endl;
	if (bsp(x1, x2, x3, o4) == true)
		std::cout << "The point o4 is inside the triangle" << std::endl;
	else
		std::cout << "The point o4 is outside the triangle" << std::endl;
	return (0);
}
