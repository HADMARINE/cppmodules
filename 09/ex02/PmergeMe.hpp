/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:07:50 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/12 09:44:36 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <ctime>
#include <cstdlib>

class PmergeMe {
private:
    PmergeMe();
public:
    PmergeMe(int argc, char **argv);
    PmergeMe(const PmergeMe &cpy);
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe() {};
    
    void sortDeque(std::deque<int> &);
    void sortList(std::list<int> &);
};

#endif