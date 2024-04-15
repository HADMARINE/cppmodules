/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:16:38 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/15 12:23:11 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

static void doSomething(int &a) {
    std::cout << a << std::endl;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    iter(arr, 5, doSomething);
    return 0;
}