/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:29:38 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 17:08:14 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DEBUG

#ifdef DEBUG

#define DMSG(x) std::cout << x << std::endl

#else

#define DMSG(x)

#endif

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    Fixed& operator = (const Fixed&);
    int getRawBits() const;
    void setRawBits(int const raw);
private:
    int value;
    static const int bits = 8;
};