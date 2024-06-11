/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:02:54 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:29:23 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string & target);
    ShrubberyCreationForm(const ShrubberyCreationForm & cpy);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & cpy);

    void execute(Bureaucrat const &) const;
};

#endif