/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:00:52 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/23 14:43:13 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <iostream>

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    
    std::cout << "vector : [ ";
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "]" << std::endl;

    try {
        std::cout << "find 1 : ";
        int val = easyfind(v, 1);
        std::cout << "found ( " << val << " )" << std::endl;
        std::cout << "find 3 : ";
        easyfind(v, 3);
    } catch (std::exception &e) {
        (void)e;
        std::cout << "not found" << std::endl;
    }
    return 0;
}