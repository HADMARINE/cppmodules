/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:00:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 18:05:49 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {};

Intern::~Intern() {};

Intern & Intern::operator=(const Intern & cpy) {
    if (this == &cpy)
        return (*this);
    return (*this);
}

AForm * makeForm(const std::string & request, const std::string & target) {
    std::string lst[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    const CF* forms[3] = {PresidentialPardonForm::new};
    AForm *form;
    for (int i = 0; i < 3; i++) {
        if (lst[i] == request) {
            form = new 
            return ;
        }
    }
}