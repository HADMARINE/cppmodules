/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:42:58 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 11:09:55 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer {
private:
    Serializer() {};
    Serializer(const Serializer & cpy) { operator=(cpy); };
    ~Serializer() {};
    Serializer & operator=(const Serializer & cpy) { *this = cpy; return (*this); };
public:
    static uintptr_t serialize(Data *ptr);
    static Data * deserialize(uintptr_t raw);
};

#endif