/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:58:12 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 20:08:44 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
private:
public:
    Intern();
    Intern(const Intern & cpy);
    ~Intern();
    Intern & operator=(const Intern & cpy);

    AForm * makeForm(const std::string & request, const std::string & target);

    class FormNotExistError : public std::exception {
        virtual const char * what() const throw();
    };
};

#endif