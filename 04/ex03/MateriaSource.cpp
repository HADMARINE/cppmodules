/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:47:18 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:18:40 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : count(0) {
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & copy) {
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 4; i++)
        materias[i] = copy.materias[i];
    count = copy.count;
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) {
    if (count < 4)
    {
        materias[count++] = materia;
        std::cout << "Materia \"" << materia->getType() << "\" learned !" << std::endl;
    }
    else
    {
        std::cout << "MateriaSource is full !" << std::endl;
    }
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
    AMateria *materia = NULL;
    if (type == "ice")
        materia = new Ice();
    else if (type == "cure")
        materia = new Cure();
    return (materia);
}