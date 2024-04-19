/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:07:50 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/19 12:10:23 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe &cpy) { operator=(cpy); };
    PmergeMe &operator=(const PmergeMe &);
    ~PmergeMe() {};
    
    void mergeMe();
};

#endif