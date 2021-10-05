/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:17:07 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/05 10:17:09 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

template <typename T>
void    add(T &num)
{
    num += 1;
    std::cout << "num = " << num << std::endl;
}

template <typename T>
void    deleteChar(T &tmp)
{
    tmp.erase(1, T::npos);
    std::cout << "tmp = " << tmp << std::endl;
}

template <typename Address, typename Length, typename Funct>
void    iter(Address tab, Length size, Funct f) {

    for (Length i = 0; i < size; i++)
        f(tab[i]);
}

#endif