/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:01:10 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 15:41:53 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <exception>
#include <algorithm>

template <typename T>
int easyfind(T container, int value) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end()) { return *it; }
    throw std::exception();
}

#endif