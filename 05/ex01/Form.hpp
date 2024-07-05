/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:37:30 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:32:44 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    std::string _name;
    bool _signed;
    unsigned short _gradeToSign;
    unsigned short _gradeToExecute;
public:
    Form();
    Form(const std::string & name, const int gradeToSign, const int gradeToExecute);
    Form(const Form & cpy);
    Form & operator=(const Form & cpy);
    ~Form();
    
    const std::string & getName(void) const;
    bool getSigned(void) const;
    unsigned short getGradeToSign(void) const;
    unsigned short getGradeToExecute(void) const;
    
    void beSigned(const Bureaucrat & bureaucrat);

    class GradeTooHighException : public std::exception {
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream &o, const Form &form);

#endif 