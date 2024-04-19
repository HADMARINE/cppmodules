/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:40:22 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/19 11:49:56 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN {
private:
    std::stack<double> _nums;
public:
    RPN();
    RPN(const RPN &cpy) { operator=(cpy); };
    RPN &operator=(const RPN &);
    ~RPN() {};
    void calculate(const std::string & input);
};

#endif