/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:47:04 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 00:53:58 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <climits>
#include <iostream>

Span::Span() : _arr(std::vector<int>(0)), _len(0), _max_len(0) {}

Span::Span(size_t n) : _arr(std::vector<int>(n)), _len(0), _max_len(n) {}

Span::Span(const Span & cpy) { operator=(cpy); }

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

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    while (start < end) {
        addNumber(*start);
        start++;
    }
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

const char * Span::ElementAlreadyExistException::what() throw() {
    return "Element already exists";
}

const char * Span::MaxCapacityReachedException::what() throw() {
    return "Max capacity reached";
}

const char * Span::RangeInvalidException::what() throw() {
    return "Range invalid";
}