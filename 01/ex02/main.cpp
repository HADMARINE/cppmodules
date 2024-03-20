/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:46:21 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 02:17:56 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "str: \t\t" << &str << ":" << str << std::endl;
    std::cout << "stringPTR: \t" << stringPTR << ":" << *stringPTR << std::endl;
    std::cout << "stringREF: \t" << &stringREF << ":" << stringREF << std::endl;
    return (0);
}
