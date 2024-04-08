/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:43:56 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:00:43 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
    unsigned int count;
public:
    MateriaSource();
    MateriaSource(const MateriaSource &copy) { operator=(copy); }
    ~MateriaSource() {};
    MateriaSource &operator=(const MateriaSource &);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &);
};

#endif