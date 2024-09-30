/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:03:37 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:21:24 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
    std::string _name;
    AMateria *_materia[4];
    unsigned int _count;
public:
    Character();
    Character(const Character & cpy);
    Character(std::string const &);
    ~Character();
    Character &operator=(const Character &);
    std::string const &getName() const;
    virtual void equip(AMateria *);
    void unequip(int);
    void use(int, ICharacter &);
};

#endif