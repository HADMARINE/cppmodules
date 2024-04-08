/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:05:28 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 13:27:01 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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
protected:
    unsigned int high_fives;
};