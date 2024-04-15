/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:13 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 10:13:40 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include  "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat b1("1", 1);
        Bureaucrat b2("2", 120);
        Intern i1;
        AForm *f1 = i1.makeForm("presidential pardon", "test1");
        AForm *f2 = i1.makeForm("robotomy request", "test2");
        AForm *f3 = i1.makeForm("shrubbery creation", "test3");
        
        b1.signForm(*f1);
        b1.signForm(*f2);
        b1.signForm(*f3);
        b1.executeForm(*f1);
        b1.executeForm(*f2);
        b1.executeForm(*f3);
        // b2.signForm(f2);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    
    return (0);
}