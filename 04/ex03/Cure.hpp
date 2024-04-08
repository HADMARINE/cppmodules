/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:57:18 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:15:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure & cpy) { operator=(cpy); }
    virtual ~Cure();
    Cure &operator=(const Cure &);
    AMateria *clone() const;
    void use(ICharacter &);
};

#endif