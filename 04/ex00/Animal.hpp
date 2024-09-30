/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:57:48 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/09 22:08:29 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define DEBUG

#ifdef DEBUG

#define DMSG(x) std::cout << x << std::endl

#else

#define DMSG(x)

#endif

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