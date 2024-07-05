/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:00:52 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 22:57:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <iostream>

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    
    try {
        int val = easyfind(v, 1);
        std::cout << "found : " << val << std::endl;
        easyfind(v, 3);
    } catch (std::exception &e) {
        (void)e;
        std::cout << "not found" << std::endl;
    }
    return 0;
}