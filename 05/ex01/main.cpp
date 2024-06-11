/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:13 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:22:37 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat b1("Monsieur Croissant", 1);
        Bureaucrat b2("Madame Baguette", 120);
        std::cout << b1 << std::endl << b2 << std::endl;
        Form f1("Projet de loi de la protection de l'appelation << Croissant Parisien >>", 2, 2);
        Form f2("Obligation de consommation de la baguette", 2, 2);
        b1.signForm(f1);
        b2.signForm(f2);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    
    return (0);
}