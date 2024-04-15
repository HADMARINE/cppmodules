/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:14 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 12:58:04 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>

template <typename T>
class Array {
protected:
    size_t _size;
    T *_arr;
public:
    Array() : _size(0), _arr(new T[0]) {};
    Array(unsigned int n) : _size(n), _arr(new T[n]) {};
    Array(const Array & cpy) { _arr = NULL; operator=(cpy); };
    ~Array() { delete[] _arr; }
    Array & operator=(const Array & cpy) {
        if (this->_arr != NULL)
            delete[] _arr;
        _size = cpy.size();
        _arr = new T[cpy.size()];
        for (unsigned int i = 0; i < cpy.size(); i++)
            _arr[i] = cpy._arr[i];
        return *this;
    };
    
    size_t size() const {
        return _size;
    };
    T& operator [](size_t idx) {
        if (idx >= _size)
            throw std::out_of_range("Index out of range");
        return _arr[idx];
    }
};

#endif