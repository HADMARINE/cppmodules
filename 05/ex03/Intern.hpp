/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:58:12 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 10:07:38 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {
private:
public:
    Intern();
    Intern(const Intern & cpy) { operator=(cpy); };
    ~Intern();
    Intern & operator=(const Intern & cpy);

    AForm * makeForm(const std::string & request, const std::string & target);
};

#endif