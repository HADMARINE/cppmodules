/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:42:58 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/09 14:34:25 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer {
private:
    Serializer() {};
    Serializer(const Serializer & cpy);
    ~Serializer() {};
    Serializer & operator=(const Serializer & cpy);
public:
    static uintptr_t serialize(Data *ptr);
    static Data * deserialize(uintptr_t raw);
};

#endif