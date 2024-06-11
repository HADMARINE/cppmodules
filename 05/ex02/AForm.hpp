/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:30 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:31:31 by lhojoon          ###   ########.fr       */
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
    AForm(const AForm & cpy);
    AForm & operator=(const AForm & cpy);
    ~AForm();
    
    const std::string & getName(void) const;
    const std::string & getTarget(void) const;
    bool getSigned(void) const;
    unsigned short getGradeToSign(void) const;
    unsigned short getGradeToExecute(void) const;

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