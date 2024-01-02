/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:19:17 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/02 12:38:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP_
#define SCALARCONVERTER_HPP_

#include <iostream>
#include <limits>
#include <regex>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID
};

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter &operator=(const ScalarConverter &assign);

public:
	~ScalarConverter();

	static void convert(std::string literal);
};

// program function declarations
e_type getType(const std::string &s);
template <typename T>
std::string valueToString(T v);
void handleChar(std::string s);
void handleInt(std::string s);
void handleFloat(std::string s);
void handleDouble(std::string s);
void handlePseudo(std::string s);
void handleInvalid(std::string s);
bool checkInt(std::string &s);
bool checkFloat(std::string &s);

#endif
