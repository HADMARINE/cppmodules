/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:46:20 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 13:19:33 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {};

Form::Form(const std::string & name, int gradeToSign, int gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    _name = name;
    _gradeToSign = gradeToSign;
    _gradeToExecute = gradeToExecute;
}

Form::~Form() {}

Form & Form::operator=(const Form & cpy) {
    if (this == &cpy)
        return (*this);
    _name = cpy.getName();
    _signed = cpy.getSigned();
    _gradeToSign = cpy.getGradeToSign();
    _gradeToExecute = cpy.getGradeToExecute();
    return (*this);
}

void Form::beSigned(const Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    if (_signed == true)
    {
        std::cout << "Warning : Form is already signed" << std::endl;
        return ;
    }
    _signed = true;
}

const char * Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char * Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &o, const Form &form) {
    o << "Form name:\t\t" << form.getName() << std::endl;
    o << "Signed:\t\t" << form.getSigned() << std::endl;
    o << "Grade to sign:\t\t" << form.getGradeToSign() << std::endl;
    o << "Grade to execute:\t\t" << form.getGradeToExecute() << std::endl;
    return (o);
}
