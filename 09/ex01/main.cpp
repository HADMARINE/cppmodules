/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:38:07 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 09:43:46 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    RPN cal;
    cal.calculate(argv[1]);
    return 0;
}