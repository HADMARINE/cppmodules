/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:44:55 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:15:02 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &cpy) { operator=(cpy); }
    virtual ~Ice();
    Ice &operator=(const Ice &);
    AMateria *clone() const;
    void use(ICharacter &);
};

#endif