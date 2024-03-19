/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:14:46 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 12:13:22 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin >> std::ws, input);
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            break;
        else if (input == "")
            continue;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}
