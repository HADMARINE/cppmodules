/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:29:38 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 19:13:20 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEBUG



class Fixed
{
public:
    Fixed();
    Fixed(const Fixed&);
    Fixed(const int);
    Fixed(const float);
    ~Fixed();
    Fixed& operator = (const Fixed&);
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
private:
    int value;
    static const int bits = 8;
};

std::ostream &operator<<(std::ostream &, Fixed const &);


#ifdef DEBUG

#define DMSG(x) std::cout << x << std::endl

#else

#define DMSG(x)

#endif