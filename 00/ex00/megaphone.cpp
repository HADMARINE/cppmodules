/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:04:19 by lhojoon           #+#    #+#             */
/*   Updated: 2023/12/22 17:04:42 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;
    int i = 1;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argc > i)
    {
        str = std::string(argv[i]);
        
        for(std::string::iterator it = str.begin(), end = str.end();
            it != end; ++it)
            *it = toupper(*it);
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
}