/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:03:29 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:18:22 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : _name("default"), _count(0) {
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character & Character::operator=(const Character &copy) {
    if (this == &copy)
        return (*this);
    _name = copy._name;
    for (unsigned int i = 0; i < 4; i++)
    {
        if (i <= _count)
            delete _materia[i];
        _materia[i] = copy._materia[i];
    }
    return (*this);
}


void Character::equip(AMateria *m) {
    if (_count > 4)
    {
        std::cout << "No more space for learn materia !" << std::endl;
        return ;
    }
    if (!m)
    {
        std::cout << "Materia is NULL !" << std::endl;
        return ;
    }
    _materia[_count++] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || (unsigned)idx >= _count)
    {
        std::cout << "Invalid index !" << std::endl;
        return ;
    }
    for (int i = idx; i < (int)_count - 1; i++)
        _materia[i] = _materia[i + 1];
    _materia[_count - 1] = NULL;
    _count--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || (unsigned)idx >= _count)
    {
        std::cout << "Invalid index !" << std::endl;
        return ;
    }
    _materia[idx]->use(target);
}