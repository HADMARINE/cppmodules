/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:30 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 15:59:13 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
    std::string _name;
    std::string _target;
    bool _signed;
    unsigned short _gradeToSign;
    unsigned short _gradeToExecute;
    AForm();
public:
    AForm(const std::string & name, const std::string & target, const int gradeToSign, const int gradeToExecute);
    AForm(const AForm & cpy) { operator=(cpy); };
    AForm & operator=(const AForm & cpy);
    ~AForm();
    
    const std::string & getName(void) const { return (_name); };
    const std::string & getTarget(void) const { return (_target); };
    bool getSigned(void) const { return (_signed); };
    unsigned short getGradeToSign(void) const { return (_gradeToSign); };
    unsigned short getGradeToExecute(void) const { return (_gradeToExecute); };

    void beSigned(Bureaucrat const & bureaucrat);
    virtual void execute(Bureaucrat const & bureaucrat) const = 0;

    class GradeTooHighException : public std::exception {
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char * what() const throw();
    };
    class AlreadySignedException : public std::exception {
        virtual const char * what() const throw();
    };
    class NotYetSignedException : public std::exception {
        virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream &o, const AForm &form);

#endif 