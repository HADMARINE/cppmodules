/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:32:21 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:20:15 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(const AMateria &);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &);
    
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif