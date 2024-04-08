/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:20 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 15:12:22 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(const Brain &copy)
{
    operator=(copy);
}

Brain::~Brain() {}

Brain &Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    return (*this);
}
