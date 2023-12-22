/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:18:29 by lhojoon           #+#    #+#             */
/*   Updated: 2023/12/22 18:20:40 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
}

PhoneBook::~PhoneBook()
{

}

PhoneBook PhoneBook::operator=(const PhoneBook &phonebook)
{
    count = phonebook.count;
    for (int i = 0; i < 8; i++)
        contacts[i] = phonebook.contacts[i];
    return (*this);
}

PhoneBook::PhoneBook(const PhoneBook &phonebook)
{
    count = phonebook.count;
    for (int i = 0; i < 8; i++)
        contacts[i] = phonebook.contacts[i];
}



void PhoneBook::add()
{
    std::string input;
    if (count == 8)
        this->shift();
    else 
        this->count++;
    contacts[count] = Contact();
    std::cout << "First Name : ";
    std::getline(std::cin, input);
    contacts[count].setFirstName(input);
    std::cout << "Last Name : ";
    std::getline(std::cin, input);
    contacts[count].setLastName(input);
    std::cout << "Nickname : ";
    std::getline(std::cin, input);
    contacts[count].setNickname(input);
    std::cout << "Phone Number : ";
    std::getline(std::cin, input);
    contacts[count].setPhoneNumber(input);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, input);
    contacts[count].setDarkestSecret(input);
}

void PhoneBook::shift()
{
    for (int i = 0; i < 7; i++)
        contacts[i] = contacts[i + 1];
}