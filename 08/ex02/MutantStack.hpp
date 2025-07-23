/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:04:33 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/23 15:01:05 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack) {}
    virtual ~MutantStack() {}

    MutantStack &operator=(const MutantStack &mutantStack) {
        if (this != &mutantStack)
            this->c = mutantStack.c;
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};

#endif