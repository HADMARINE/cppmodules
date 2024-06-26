/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:16:07 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:13:03 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
    std::string _name;
    unsigned short _grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string & name, int grade);
    Bureaucrat(const Bureaucrat& cpy);
    ~Bureaucrat();
    Bureaucrat & operator=(const Bureaucrat &);

    const std::string & getName(void) const;
    unsigned short getGrade(void) const;
    void incrementGrade(unsigned int grade);
    void decrementGrade(unsigned int grade);
    void signForm(Form & form) const;

    class GradeTooHighException : public std::exception {
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char * what() const throw();
    };
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat & bureaucrat);

#endif