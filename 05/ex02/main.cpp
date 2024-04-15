/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:13 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 16:52:07 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include  "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat b1("1", 1);
        Bureaucrat b2("2", 120);
        PresidentialPardonForm f1("test1");
        RobotomyRequestForm f2("test2");
        ShrubberyCreationForm f3("test3");
        
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
        // b2.signForm(f2);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    
    return (0);
}