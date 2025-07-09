/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:14 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/09 14:45:21 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>


// template <typename T>
// size_t Array<T>::size() const {
//     return this->_size;
// }


template<typename T>
class Array {
protected:
    T *_arr;
    unsigned int _size;
public:
    Array<T>() : _arr(NULL), _size(0)  {};
    Array<T>(unsigned int n) : _arr(new T[n]), _size(n) {};
    Array<T>(const Array<T> &t) : _arr(new T[t._size]), _size(t._size)
    {
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = t._arr[i];
    }
    ~Array<T>() { delete[] _arr; }


    Array<T> & operator=(const Array<T> & cpy) {
        _size = cpy._size;
        _arr = new T[cpy.size()];
        for (unsigned int i = 0; i < cpy.size(); i++)
            _arr[i] = cpy._arr[i];
        return *this;
    };
    
    T &operator [](unsigned int idx) {
        if (idx >= _size)
            throw std::out_of_range("Index out of range");
        return _arr[idx];
    }

    size_t size() const {
        return this->_size;
    }
};

#endif