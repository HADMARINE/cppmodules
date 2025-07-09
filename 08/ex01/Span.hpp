/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:49:01 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/09 14:41:41 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <cstddef>
#include <algorithm>

class Span {
private:
    std::vector<int> _arr;
    size_t _len;
    size_t _max_len;
public:
    Span();
    Span(const Span &copy);
    Span(size_t n);
    ~Span();
    Span &operator=(const Span &copy);
    
    void addNumber(int n);
    void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

    class MaxCapacityReachedException : public std::exception {
        virtual char const * what() const throw();
    };

    class ElementAlreadyExistException : public std::exception {
        virtual char const * what() const throw();
    };

    class RangeInvalidException : public std::exception {
        virtual char const * what() const throw();
    };
};

#endif