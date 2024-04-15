/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:07:40 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 10:41:00 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

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
        case TYPE_INF:
            return "infinity";
        case TYPE_NAN:
            return "nan";
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

    if (str == "nan" || str == "+nan" || str == "-nan") {
        return TYPE_NAN;
    }

    if (str == "-inff" || str == "+inff" || str == "inff" || str == "-inf" || str == "+inf" || str == "inf") {
        return TYPE_INF;
    }

    if (str.length() == 3 && str.at(0) == '\'' && str.at(2) == '\'') {
        return TYPE_CHAR;
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

static void printImpossible() {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

static const std::string printChar(char c) {
    if (std::isprint(c)) {
        return std::string(1, c);
    } else {
        return std::string("Nun displayable");
    }
}

void ScalarConverter::convertFromChar(std::string & str) {
    char c = str.at(1);
    
    std::cout << "char: " << printChar(c) << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertFromInt(std::string & str) {
    int i;
    try {
        i = std::atoi(str.c_str());
        std::cout << "char: "  << printChar(static_cast<char>(i)) << std::endl;
        std::cout << "int " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    } catch(const std::exception & e) {
        (void)e;
        printImpossible();
    }
}

void ScalarConverter::convertFromFloat(std::string & str) {
    float f;
    try {
        f = std::atof(str.c_str());
        std::cout << "char: " << printChar(static_cast<char>(f)) << std::endl;
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    } catch(const std::exception & e) {
        (void)e;
        printImpossible();
    }
}

void ScalarConverter::convertFromDouble(std::string & str) {
    double d;
    try {
        d = std::atof(str.c_str());
        std::cout << "char: " << printChar(static_cast<char>(d)) << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    } catch (const std::exception & e) {
        (void)e;
        printImpossible();
    }
}

void ScalarConverter::convertFromInvalid(std::string & str) {
    (void)str;
    printImpossible();
}

void ScalarConverter::convertFromInf(std::string & str) {
    if (str.at(0) == '-') {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
}

void ScalarConverter::convertFromNan(std::string & str) {
    (void)str;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convert(const char *input) {
    std::string s(input);
    // std::cout << ScalarConverter::getTypeName(ScalarConverter::getType(s)) << std::endl;
    t_type type = ScalarConverter::getType(s);
    switch (type) {
        case TYPE_CHAR:
            ScalarConverter::convertFromChar(s);
            break;
        case TYPE_INT:
            ScalarConverter::convertFromInt(s);
            break;
        case TYPE_FLOAT:
            ScalarConverter::convertFromFloat(s);
            break;
        case TYPE_DOUBLE:
            ScalarConverter::convertFromDouble(s);
            break;
        case TYPE_INF:
            ScalarConverter::convertFromInf(s);
            break;
        case TYPE_NAN:
            ScalarConverter::convertFromNan(s);
            break;
        case TYPE_INVALID:
        default:
            printImpossible();
            break;
    }
    
}