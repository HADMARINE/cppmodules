/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:15:19 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:12:52 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        // Testing copy constructor
        Dog basic;
        {
            Dog tmp = basic;
        }
    }
    
    Animal *animals[100];
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 100; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }
}