/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:22:04 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 16:22:06 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

void print(int i)
{
    std::cout << i << std::endl;
}


template <typename T>
typename T::const_iterator easyfind(T const & container, int const & find) {

    typename T::const_iterator it = std::find(container.begin(), container.end(), find);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif