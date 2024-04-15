/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:19:25 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/09 16:50:22 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string & target);
    PresidentialPardonForm(const PresidentialPardonForm & cpy) : AForm(cpy.getName(), cpy.getTarget(), cpy.getGradeToSign(), cpy.getGradeToExecute()) { operator=(cpy); };
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(const PresidentialPardonForm & cpy);

    void execute(Bureaucrat const &) const;
};

#endif