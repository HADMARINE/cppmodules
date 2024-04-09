/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:13 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 13:27:38 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat b1("1", 1);
        Bureaucrat b2("2", 120);
        Form f1("Hello", 2, 2);
        Form f2("world", 2, 2);
        b1.signForm(f1);
        b2.signForm(f2);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    
    return (0);
}