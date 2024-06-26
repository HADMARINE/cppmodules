/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:00:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 20:16:33 by lhojoon          ###   ########.fr       */
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

Intern::Intern(const Intern & cpy) { operator=(cpy); };

static AForm * createPresidentialPardonForm(const std::string & target) {
    return (new PresidentialPardonForm(target));
}

static AForm * createRobotomyRequestForm(const std::string & target) {
    return (new RobotomyRequestForm(target));
}

static AForm * createShrubberyCreationForm(const std::string & target) {
    return (new ShrubberyCreationForm(target));
}

AForm * Intern::makeForm(const std::string & request, const std::string & target) {
    std::string lst[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm * (*func[3])(const std::string & target) = { createPresidentialPardonForm,
                                                    createRobotomyRequestForm,
                                                    createShrubberyCreationForm};
    for (int i = 0; i < 3; i++) {
        if (lst[i] == request) {
            return func[i](target);
        }
    }
    throw FormNotExistError();
}

const char * Intern::FormNotExistError::what() const throw() {
    return "Intern does not have a capacity to treat this form";
}