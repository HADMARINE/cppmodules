/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:13 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:01:02 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat b1("1", 1);
        Bureaucrat b2("1", 120);
        b1.incrementGrade(1);
        std::cout << "Success ! " << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;    
    }

    try {
        Bureaucrat b1("1", 151);
        b1.incrementGrade(1);
        std::cout << "Success ! " << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;    
    }

    try {
        Bureaucrat b1("1", 1);
        Bureaucrat b2("1", 120);
        b1.incrementGrade(119);
        std::cout << "Success ! " << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    
    }
    
    return (0);
}