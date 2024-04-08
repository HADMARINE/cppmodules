/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:27 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 15:11:17 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

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