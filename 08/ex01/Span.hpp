/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:49:01 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 17:52:48 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
private:
    int *_arr;
    unsigned int _len;
    unsigned int _max_len;
public:
    Span();
    Span(const Span &copy) { operator=(copy);};
    Span(unsigned int n);
    ~Span() { delete[] _arr; };
    Span &operator=(const Span &copy);
    
    void addNumber(int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif