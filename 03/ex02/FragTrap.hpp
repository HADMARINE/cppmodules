/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:05:28 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 12:55:54 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string & name);
    FragTrap(const FragTrap & frag_trap);
    ~FragTrap();
    FragTrap & operator=(const FragTrap & frag_trap);

    void setHighFives(unsigned int high_fives);
    unsigned int getHighFives(void) const;

    void highFiveGuys(void);
private:
    unsigned int high_fives;
};