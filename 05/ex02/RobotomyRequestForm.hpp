/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:12:44 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:28:42 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string & target);
    RobotomyRequestForm(const RobotomyRequestForm & cpy);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator=(const RobotomyRequestForm &);

    void execute(Bureaucrat const &) const;
};

#endif