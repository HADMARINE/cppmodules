/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:18:22 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 12:09:35 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>

class PhoneBook
{
public:
    PhoneBook();
    PhoneBook(const PhoneBook &phonebook);
    ~PhoneBook();
    PhoneBook operator=(const PhoneBook &phonebook);
    void add();
    void search();
private:
    Contact contacts[8];
    int count;
    void shift();
    void _printWithLengthLimit(std::string str);
    void _printBrief();
    int _readInput() const;
};

#endif