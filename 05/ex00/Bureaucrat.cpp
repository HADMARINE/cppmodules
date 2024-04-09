/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:22:02 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 12:45:23 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("default"), _grade(1) {}

Bureaucrat::Bureaucrat(const std::string & name, int grade) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _name = name;
    _grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & cpy) {
    if (this == &cpy)
        return (*this);
    _grade = cpy.getGrade();
    _name = cpy.getName();
    return (*this);
}

const std::string & Bureaucrat::getName(void) const {
    return (_name);
}

unsigned short Bureaucrat::getGrade(void) const {
    return (_grade);
}

void Bureaucrat::incrementGrade(unsigned int grade) {
    if (_grade - grade < 150) {
        throw GradeTooHighException();
    }
    _grade -= grade;
}

void Bureaucrat::decrementGrade(unsigned int grade) {
    if ((long)_grade + (long)grade < 1) {
        throw GradeTooLowException();
    }
    _grade += grade;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat & bureaucrat) {
    o << bureaucrat.getName() << " ::: grade ::: " << bureaucrat.getGrade() << std::endl;
    return (o);
}
