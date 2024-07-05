/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:18:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 19:40:26 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShruberryCreationForm", "default", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("ShrubberyCreationForm", target, 145, 137) {};

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : AForm(cpy.getName(), cpy.getTarget(), cpy.getGradeToSign(), cpy.getGradeToExecute()) { operator=(cpy); };

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & cpy) {
    (void)cpy;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const {
    if (bureaucrat.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    
    std::fstream fs;
    fs.open(((this->getTarget() + "_shrubbery")).c_str(), std::fstream::out | std::fstream::trunc);
    if (!fs.good())
    {
        std::cerr << "Error while opening target" << std::endl;
        return ;
    }
    fs << "                                                 \n";
    fs << "                       O                         \n";
    fs << "                      ***                        \n";
    fs << "                     **O**                       \n";
    fs << "                    *******                      \n";
    fs << "                   *********                     \n";
    fs << "                  ***********                    \n";
    fs << "                   ******o**                     \n";
    fs << "                  ***********                    \n";
    fs << "                 ****o********                   \n";
    fs << "                ***************                  \n";
    fs << "               ****o***o********                 \n";
    fs << "              *******************                \n";
    fs << "            ***********************              \n";
    fs << "               *****O***********                 \n";
    fs << "              **********o********                \n";
    fs << "             ****************o****               \n";
    fs << "            **O********************              \n";
    fs << "           ***********o********O****             \n";
    fs << "         *****************************           \n";
    fs << "             *********************               \n";
    fs << "            ***o*******************              \n";
    fs << "           ***********o*******o*****             \n";
    fs << "          ***************************            \n";
    fs << "         ***********************O*****           \n";
    fs << "        ***O***************************          \n";
    fs << "      ***********************************        \n";
    fs << "           *************************             \n";
    fs << "          *******o********o**********            \n";
    fs << "         *****************************           \n";
    fs << "        **************o****************          \n";
    fs << "       *************************O*******         \n";
    fs << "      *****O*****************************        \n";
    fs << "    **************o************************      \n";
    fs << "          ***************************            \n";
    fs << "         *************o***************           \n";
    fs << "        ***********o*******************          \n";
    fs << "       **************************O******         \n";
    fs << "      ***o******************O************        \n";
    fs << "    ***o***********o****************o******      \n";
    fs << "                      ###                        \n";
    fs << "                      ###                        \n";
    fs << "                      ###                        \n";
    fs << "                  ###########                    \n";
    fs << "                  ###########                    \n";
    fs.close();
}
