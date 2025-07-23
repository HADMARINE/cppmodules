/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:47:04 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/23 14:50:28 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <climits>
#include <iostream>

Span::Span() : _arr(std::vector<int>(0)), _len(0), _max_len(0) {}

Span::Span(size_t n) : _arr(std::vector<int>(n)), _len(0), _max_len(n) {}

Span::Span(const Span & copy) {
    _arr = copy._arr;
    _len = copy._len;
    _max_len = copy._max_len;
}

Span::~Span() {}

Span & Span::operator=(const Span &copy) {
    if (this == &copy)
        return *this;
    _arr = copy._arr;
    _len = copy._len;
    _max_len = copy._max_len;
    return *this;
}

void Span::addNumber(int n) {
    if (_len == _max_len) {
        throw MaxCapacityReachedException();
    }
    _arr[_len++] = n;
    std::sort(_arr.begin(), _arr.begin() + _len);
}

int Span::shortestSpan() {
    if (_len < 1)
        throw RangeInvalidException();
    int span = INT_MAX;
    for (size_t i = 0; i < _len - 1; i++) {
        if ((_arr[i + 1] - _arr[i]) < span)
            span = _arr[i + 1] - _arr[i];
    }
    return span;
}

int Span::longestSpan() {
    return *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());
}

char const * Span::ElementAlreadyExistException::what() const throw() {
    return "Element already exists";
}

char const * Span::MaxCapacityReachedException::what() const throw() {
    return "Max capacity reached";
}

char const * Span::RangeInvalidException::what() const throw() {
    return "Range invalid";
}