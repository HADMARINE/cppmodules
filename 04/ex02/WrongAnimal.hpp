/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:09:02 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:09:51 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &);
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    void makeSound() const;
protected:
    std::string type;
};

#endif