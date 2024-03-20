/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:46:21 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:50:38 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "str: \n\n" << &str << std::endl;
    std::cout << "stringPTR: \n\n" << &stringPTR << std::endl;
    std::cout << "stringREF: \n\n" << &stringREF << std::endl;
    return (0);
}

