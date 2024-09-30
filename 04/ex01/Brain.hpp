/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:27 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/10 12:48:46 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include "Animal.hpp"

class Brain
{
public:
    Brain();
    Brain(const Brain &);
    virtual ~Brain();
    Brain &operator=(const Brain &);
protected:
    std::string ideas[100];
};

#endif