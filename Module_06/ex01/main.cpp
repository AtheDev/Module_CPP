/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adupuy <adupuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:28:29 by adupuy            #+#    #+#             */
/*   Updated: 2021/10/04 17:28:32 by adupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t   serialize(Data * ptr) {

    return reinterpret_cast<uintptr_t>(ptr);
}

Data *      deserialize(uintptr_t raw) {

    return reinterpret_cast<Data *>(raw);
}

void    printData(Data * data)
{
    std::cout << "Data.i = " << data->i
                << ", Data.c = " << data->c
                << ", Data.str = " << data->str
                << std::endl;
    std::cout << "Address Data = " << &data << std::endl;
}

int main()
{
    Data data;
    data.i = 42;
    data.c = 'a';
    data.str = "Hello!";

    printData(&data);

    uintptr_t   ret = serialize(&data);
    Data *      dataTest = deserialize(ret);

    printData(dataTest);

    return 0;
}