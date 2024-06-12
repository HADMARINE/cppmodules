/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:40:15 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 09:43:27 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <cstdlib>

RPN::RPN() {}

RPN &RPN::operator=(const RPN &rhs) {
    if (this != &rhs) {
        _nums = rhs._nums;
    }
    return *this;
}

RPN::RPN(const RPN & cpy) { operator=(cpy); }

void RPN::calculate(const std::string &input) {
    std::string::const_iterator it = input.begin();
    while (it != input.end()) {
        if (*it == ' ')
        {
            it++;
            continue;
        }
        if (isdigit(*it)) {
            _nums.push(std::atof(&(*it)));
            while (isdigit(*it) || *it == '.')
                it++;
        }
        else if (*it == '+' || *it == '-' || *it == '*' || *it == '/') {
            if (_nums.size() < 2) {
                std::cerr << "Error: invalid input" << std::endl;
                return;
            }
            double a = _nums.top();
            _nums.pop();
            double b = _nums.top();
            _nums.pop();
            if (*it == '+')
                _nums.push(b + a);
            else if (*it == '-')
                _nums.push(b - a);
            else if (*it == '*')
                _nums.push(b * a);
            else if (*it == '/')
                _nums.push(b / a);
            it++;
        }
        else {
            std::cout << "Error: invalid input" << std::endl;
            return;
        }
    }
    std::cout << _nums.top() << std::endl;
}

