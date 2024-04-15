/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:07:40 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/10 16:31:18 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

const char *ScalarConverter::getTypeName(t_type type) {
    switch (type) {
        case TYPE_CHAR:
            return "char";
        case TYPE_INT:
            return "int";
        case TYPE_FLOAT:
            return "float";
        case TYPE_DOUBLE:
            return "double";
        case TYPE_INVALID:
            return "invalid";
        default:
            return "unknown";
    }
}

t_type ScalarConverter::getType(std::string & str) {
    bool onlyDigits = true;
    bool onlyDigitsAndDotBeforeAndLastF = true;
    bool containsDotBetween = false;
    bool containsOneDot = false;
    bool endsWithF = false;
    bool inOperators = true;

    if (str.length() == 3 && str.at(0) == '\'' && str.at(2) == '\'') {
        if (std::isprint(str.at(1))) {
            return TYPE_CHAR;
        }
        return TYPE_INVALID;
    }

    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (inOperators) {
            if (*it == '+' || *it == '-') {
                ++it;
                continue;
            } else {
                inOperators = false;
            }
        }
        if (onlyDigits && !std::isdigit(*it)) {
            onlyDigits = false;
        }
        if (onlyDigitsAndDotBeforeAndLastF) {
            if (std::isdigit(*it) || *it == '.' || (*it == 'f' && it == (str.end() - 1))) {
                onlyDigitsAndDotBeforeAndLastF = true;
            } else {
                onlyDigitsAndDotBeforeAndLastF = false;
            }
        }
        if (*it == '.' && it != str.begin() && it != (str.end() - 1)) {
            if (!containsDotBetween && !containsOneDot) {
                containsOneDot = true;
            } else {
                containsOneDot = false;
            }
            containsDotBetween = true;
        }
    }
    if (*(str.end() - 1) == 'f') {
        endsWithF = true;
    }
    if (containsDotBetween && endsWithF && onlyDigitsAndDotBeforeAndLastF && containsOneDot) {
        return TYPE_FLOAT;
    }
    if (containsDotBetween && onlyDigitsAndDotBeforeAndLastF && containsOneDot) {
        return TYPE_DOUBLE;
    }
    if (onlyDigits) {
        return TYPE_INT;
    }
    return TYPE_INVALID;
}

void ScalarConverter::convertFromChar(std::string & str) {
    char c = str.at(1);
    
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::convertFromInt(std::string & str) {
    int i;
    try {
        i = std::stoi(str);
    } catch(const std::exception & e) {
        (void)e;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

}

void ScalarConverter::convert(const char *input) {
    std::string s(input);
    // std::cout << ScalarConverter::getTypeName(ScalarConverter::getType(s)) << std::endl;
    t_type type = ScalarConverter::getType(s);
    
}