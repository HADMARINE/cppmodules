/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:05:10 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/10 16:16:07 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

typedef enum e_type {
    TYPE_CHAR = 0, TYPE_INT = 1, TYPE_FLOAT = 2, TYPE_DOUBLE = 3, TYPE_INVALID = 4
} t_type;

class ScalarConverter {
private:
    static const char *getTypeName(t_type type);
    static t_type getType(std::string & str);
    static void convertFromChar(std::string &);
    static void convertFromInt(std::string &);
    static void convertFromFloat(std::string &);
    static void convertFromDouble(std::string &);
    static void convertFromInvalid(std::string &);
public:
    static void convert(const char *input);
};

#endif