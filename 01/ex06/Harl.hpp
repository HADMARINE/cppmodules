/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:33:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 15:45:37 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void debug();
    void info();
    void warning();
    void error();
};

typedef void (Harl::*t_harlfunc)();