/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:53:26 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/04 17:53:28 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

#include <iostream>
#include <string>
#include <stdint.h>

struct  Data {

    int         i;
    char        c;
    std::string str;
};

uintptr_t   serialize(Data * ptr);
Data *      deserialize(uintptr_t raw);
void    printData(Data * data);

#endif