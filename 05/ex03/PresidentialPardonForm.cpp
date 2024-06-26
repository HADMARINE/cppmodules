/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:34:53 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:39:41 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", "default", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : AForm("PresidentialPardonForm", target, 25, 5) {};

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & cpy) {
    if (this == &cpy)
        return (*this);
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : AForm(cpy.getName(), cpy.getTarget(), cpy.getGradeToSign(), cpy.getGradeToExecute()) { operator=(cpy); };

PresidentialPardonForm::~PresidentialPardonForm() {};

void PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const {
    if (bureaucrat.getGrade() > this->getGradeToExecute()) {
        throw GradeTooLowException();
    }
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
