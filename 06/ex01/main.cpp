/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:42:16 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 11:09:42 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Data.hpp"
#include "Serializer.hpp"
#include <stdint.h>
#include <iostream>

int main()
{
    Data d;
    d.a = 42;
    d.b = 'h';
    d.c = 42.0;
    
    uintptr_t ptr = Serializer::serialize(&d);
    Data *d2 = Serializer::deserialize(ptr);
    std::cout << "a: " << d2->a << std::endl;
    std::cout << "b: " << d2->b << std::endl;
    std::cout << "c: " << d2->c << std::endl;
}