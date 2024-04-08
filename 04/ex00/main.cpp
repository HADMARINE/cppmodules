/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:15:19 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 14:20:42 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const WrongCat *wc = new WrongCat();
    const Dog *dog = new Dog();
    const Cat *cat = new Cat();
    const Animal *meta = new Animal();
    
    
    cat->makeSound();
    dog->makeSound();
    wc->makeSound();
    meta->makeSound();

    delete wc;
    delete dog;
    delete meta;
    delete cat;
}