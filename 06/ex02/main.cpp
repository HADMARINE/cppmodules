/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:54:34 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 12:06:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <cstdio>
#include <iostream>

static Base * generate() {
    switch (rand() % 3)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
        default:
            exit(1);
    }   
}

static void identify(Base &p) {
    int i;
    for (i = 0; i < 3; i++) {
        try {
            if (i == 0) { (void)dynamic_cast<A &>(p); }
            else if (i == 1) { (void)dynamic_cast<B &>(p); }
            else if (i == 2) { (void)dynamic_cast<C &>(p); }
            break ;
        } catch (std::exception &e) {
            (void)e;
        }
    }
    std::cout << "Identifed by reference as : ";
    if (i > 2) {
        std::cout << "Unknown type" << std::endl;
    }
    if (i == 0) { std::cout << "A" << std::endl; }
    else if (i == 1) { std::cout << "B" << std::endl; }
    else if (i == 2) { std::cout << "C" << std::endl; }
}

static void identify(Base *p) {
    std::cout << "Identifed by pointer as : ";
    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

int main() {
    srand(time(NULL));

    Base *test = generate();
    identify(*test);
    identify(test);

    return 0;
}