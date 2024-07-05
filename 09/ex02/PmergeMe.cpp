/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:07:38 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 09:44:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>

static void printValue(std::deque<int> &v) {
    for (std::deque<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


PmergeMe::PmergeMe(int argc, char **argv) {
    std::deque<int> deque;
    std::list<int> list;

    for (int i = 0; i < argc; ++i) {
        int v = atoi(argv[i]);
        if (v < 0) {
            std::cerr << "Error : Invalid value \"" << argv[i] << "\". Only positive integers are allowed." << std::endl;
            exit(1);
        }
        deque.push_back(v);
        list.push_back(v);
    }

    srand(time(NULL));

    std::cout << "Before:\t";
    printValue(deque);

    clock_t startDeque = clock();
    sortDeque(deque);
    clock_t endDeque = clock();

    clock_t startList = clock();
    sortList(list);
    clock_t endList = clock();

    std::cout << "After:\t";
    printValue(deque);
    std::cout << "Time to process a range of " << deque.size() << " elements with std::deque: " << (double)(endDeque - startDeque) / CLOCKS_PER_SEC << "s" << std::endl;
    std::cout << "Time to process a range of " << list.size() << " elements with std::list: " << (double)(endList - startList) / CLOCKS_PER_SEC << "s" << std::endl;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &rhs) {
    if (this != &rhs) {
        *this = rhs;
    }
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe & cpy) { operator=(cpy); };

void PmergeMe::sortDeque(std::deque<int>& arr)
{
    std::deque<int>::iterator it1, it2;
    for (it1 = arr.begin() + 1; it1 != arr.end(); ++it1)
    {
        int temp = *it1;
        it2 = it1;
        while (it2 != arr.begin() && *(it2 - 1) > temp)
        {
            *it2 = *(it2 - 1);
            std::advance(it2, -1);
        }
        *it2 = temp;
    }
}

void PmergeMe::sortList(std::list<int>& arr)
{
    std::list<int>::iterator it1, it2;
    for (it1 = ++arr.begin(); it1 != arr.end(); ++it1)
    {
        int temp = *it1;
        it2 = it1;
        while (it2 != arr.begin() && *(it2--) > temp)
        {
            *it2 = *(it2--);
            std::advance(it2, -1);
        }
        *it2 = temp;
    }
}