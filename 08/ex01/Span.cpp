/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:47:04 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 18:03:35 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <climits>
#include <iostream>

Span::Span() : _arr(new int[0]), _len(0), _max_len(0) {}

Span::Span(unsigned int n) : _arr(new int[n]), _len(0), _max_len(n) {}

Span & Span::operator=(const Span &copy) {
    if (this == &copy)
        return *this;
    delete[] _arr;
    _arr = new int[copy._len];
    for (unsigned int i = 0; i < copy._len; i++)
        _arr[i] = copy._arr[i];
    _len = copy._len;
    return *this;
}

void Span::addNumber(int n) {
    if (_len == _max_len)
        throw std::exception();
    if (_len == 0) {
        _arr[_len++] = n;
    } else {
        unsigned int i;
        for (i = 0; i < _len && _arr[i] < n; i++);
        for (unsigned int j = _len; j > i; j--)
        {
            _arr[j] = _arr[j - 1];
        }
        _arr[i] = n;
        _len++;
    }
}

unsigned int Span::shortestSpan() {
    unsigned int span = UINT_MAX;
    for (unsigned int i = 0; i < _len - 1; i++) {
        if ((unsigned int)(_arr[i + 1] - _arr[i]) < span)
            span = _arr[i + 1] - _arr[i];
    }
    return span;
}

unsigned int Span::longestSpan() {
    return (unsigned int)(_arr[_len - 1] - _arr[0]);
}