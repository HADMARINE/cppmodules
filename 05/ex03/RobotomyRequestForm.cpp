/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:34:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 16:56:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "default", 72, 45) {};

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : AForm("RobotomyRequestForm", target, 72, 45) {};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & cpy) {
    (void)cpy;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const {
    if (bureaucrat.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "VRRRRRRRRRRRRR" << std::endl;
    std::srand(time(NULL));
    if (std::rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
    else
        std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
}