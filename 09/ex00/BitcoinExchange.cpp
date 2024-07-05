/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:48:57 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 09:39:55 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iterator>
#include <climits>

BitcoinExchange::BitcoinExchange() {
    std::ifstream file("data.csv");
    std::string line;
    std::string key;
    std::string valueStr;
    float value;
    std::getline(file, line);
    if (file.bad() || file.eof() || line.substr(0, line.find(',')) != "date" || line.substr(line.find(',') + 1) != "exchange_rate") {
        throw std::runtime_error("Wrong file format");
    }
    while (std::getline(file, line)) {
        key = line.substr(0, line.find(','));
        valueStr = line.substr(line.find(',') + 1);
        if (key.empty() || valueStr.empty())
            std::cerr << "Bad input line, ignoring..." << std::endl;
        value = std::atof(valueStr.c_str());
        _data[key] = value;
    }
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    if (this != &rhs) {
        _data = rhs._data;
    }
    return *this;
}

void BitcoinExchange::readData(const std::string & file) {
    std::ifstream f(file.c_str());
    std::string line;
    std::string key;
    float value;
    std::getline(f, line);
    if (line != "date | value") {
        std::cerr << "Error: file format is not correct." << std::endl;
        return;
    }
    while (std::getline(f, line)) {
        size_t pos = line.find('|');
        if (pos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        key = line.substr(0, line.find('|'));
        if (std::atoll(line.substr(line.find('|') + 1).c_str()) > INT_MAX) {
            std::cerr << "Error:  too large a number." << std::endl;
            continue;
        }
        value = std::atof(line.substr(line.find('|') + 1).c_str());
        if (*(key.end() - 1) == ' ') {
            key.erase(key.length() - 1, 1);
        }
        if (value < 0) {
            std::cerr << "Error:  not a positive number." << std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it = _data.upper_bound(key);
        if (it != _data.begin()) {
            std::cout << (*it).first << " => " << value << " = " << value * (*it).second << std::endl;
        }
    }
}