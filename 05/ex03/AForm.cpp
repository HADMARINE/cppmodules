/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:46:20 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 16:50:55 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm() : _name("default"), _target("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {};

AForm::AForm(const std::string & name, const std::string & target, int gradeToSign, int gradeToExecute) : _signed(false) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    _name = name;
    _target = target;
    _gradeToSign = gradeToSign;
    _gradeToExecute = gradeToExecute;
}

AForm::~AForm() {}

AForm & AForm::operator=(const AForm & cpy) {
    if (this == &cpy)
        return (*this);
    _name = cpy.getName();
    _target = cpy.getTarget();
    _signed = cpy.getSigned();
    _gradeToSign = cpy.getGradeToSign();
    _gradeToExecute = cpy.getGradeToExecute();
    return (*this);
}

void AForm::beSigned(Bureaucrat const & bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    if (_signed == true)
        throw AlreadySignedException();
    _signed = true;
}

void AForm::execute(Bureaucrat const & bureaucrat) const {
    if (bureaucrat.getGrade() > _gradeToExecute)
        throw GradeTooLowException();
    std::cout << "Executed : from default implementation" << std::endl;
}

const char * AForm::GradeTooHighException::what() const throw() {
    return ("grade is too high");
}

const char * AForm::GradeTooLowException::what() const throw() {
    return ("grade is too low");
}

const char * AForm::AlreadySignedException::what() const throw() {
    return ("form already signed");
}

std::ostream & operator<<(std::ostream &o, const AForm &form) {
    o << "Form name:\t\t" << form.getName() << std::endl;
    o << "Signed:\t\t" << form.getSigned() << std::endl;
    o << "Grade to sign:\t\t" << form.getGradeToSign() << std::endl;
    o << "Grade to execute:\t\t" << form.getGradeToExecute() << std::endl;
    return (o);
}
