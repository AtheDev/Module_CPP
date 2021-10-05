/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:12:07 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/04 21:12:12 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T>
T const &   min(T const & a, T const & b) {

    return ((a >= b) ? b : a);
}

template <typename T>
T const &   max(T const & a, T const & b) {

    return ((b >= a) ? b : a);
}

template <typename T>
void    swap(T &a, T &b) {

    T   tmp = a;
    a = b;
    b = tmp;
}

#endif