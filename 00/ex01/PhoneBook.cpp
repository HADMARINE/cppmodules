/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:18:29 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 12:14:06 by lhojoon          ###   ########.fr       */
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
    contacts[count - 1] = Contact();
    std::cout << "First Name : ";
    std::getline(std::cin, input);
    contacts[count - 1].setFirstName(input);
    std::cout << "Last Name : ";
    std::getline(std::cin, input);
    contacts[count - 1].setLastName(input);
    std::cout << "Nickname : ";
    std::getline(std::cin, input);
    contacts[count - 1].setNickname(input);
    std::cout << "Phone Number : ";
    std::getline(std::cin, input);
    contacts[count - 1].setPhoneNumber(input);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, input);
    contacts[count - 1].setDarkestSecret(input);
    std::cout << "Contact added" << std::endl;
}

void PhoneBook::search()
{
    int input;

    this->_printBrief();
    std::cout << "Enter index : ";
    std::cin >> std::ws >> input;
    if (input >= 0 && input < count)
    {
        std::cout << "First Name : " << contacts[input].getFirstName() << std::endl;
        std::cout << "Last Name : " << contacts[input].getLastName() << std::endl;
        std::cout << "Nickname : " << contacts[input].getNickname() << std::endl;
        std::cout << "Phone Number : " << contacts[input].getPhoneNumber() << std::endl;
        std::cout << "::: END :::" << std::endl;
    }
    else
        std::cout << "Invalid index" << std::endl;
    std::cin.clear();
}

void PhoneBook::shift()
{
    for (int i = 0; i < 7; i++)
        contacts[i] = contacts[i + 1];
}

void PhoneBook::_printWithLengthLimit(std::string str)
{
  if (str.length() > 10)
        std::cout << str.substr(0, 9) << "." << std::flush;
    else
        std::cout << std::setw(10) << str << std::flush;
}

void PhoneBook::_printBrief()
{
    std::cout << "   index  |first name|last name |nickname" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << std::flush;
        std::cout << "|";
        this->_printWithLengthLimit(contacts[i].getFirstName());
        std::cout << "|";
        this->_printWithLengthLimit(contacts[i].getLastName());
        std::cout << "|";
        this->_printWithLengthLimit(contacts[i].getNickname());
    }
    std::cout << std::endl << std::flush;
}
