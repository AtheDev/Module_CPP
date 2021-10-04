/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:53:24 by adupuy            #+#    #+#             */
/*   Updated: 2021/09/30 22:53:26 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Number of argument is wrong." << std::endl;
        return 1;
    }
    std::string value = av[1];
    if (value.empty())
    {
        std::cout << "Argument is empty." << std::endl;
        return 1;
    }

    try
    {
        Convert v(value, av[1]);
    }
    catch (Convert::ExceptionConvert & c)
    {
        std::cout << c.what() << std::endl;
        return 1;
    }
    return 0;
}