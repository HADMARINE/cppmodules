/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:57:48 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 15:51:33 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal &);
    Animal(std::string type);
    virtual ~Animal();
    Animal &operator=(const Animal &);
    
    virtual void makeSound() const;
protected:
    std::string type;
};

#endif