/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:23:54 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 12:43:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal)
{
	switch (getType(literal))
	{
	case CHAR:
		handleChar(literal);
		break;
	case INT:
		handleInt(literal);
		break;
	case FLOAT:
		handleFloat(literal);
		break;
	case DOUBLE:
		handleDouble(literal);
		break;
	case PSEUDO:
		handlePseudo(literal);
		break;
	case INVALID:
		handleInvalid(literal);
		break;
	}
}

static std::string floatToString(float f)
{
	std::ostringstream oss;
	oss << f;
	std::string newF = oss.str();
	if (newF.find('.') == std::string::npos)
		newF += ".0";
	return newF + "f";
}

static std::string doubleToString(double d)
{
	std::ostringstream oss;
	oss << d;
	std::string newD = oss.str();
	if (newD.find('.') == std::string::npos)
		newD += ".0";
	return newD;
}

void handleChar(std::string s)
{
	int i = static_cast<int>(s.at(0));
	float f = static_cast<float>(s.at(0));
	double d = static_cast<double>(s.at(0));

	std::cout << "char: '" << s << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void handleInt(std::string s)
{
	int i = std::atoi(s.c_str());
	float f = std::atof(s.c_str());
	double d = std::atof(s.c_str());
	char c = static_cast<char>(i);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void handleFloat(std::string s)
{
	int i = std::atoi(s.c_str());
	float f = std::atof(s.c_str());
	double d = std::atof(s.c_str());
	char c = static_cast<char>(i);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void handleDouble(std::string s)
{
	int i = std::atoi(s.c_str());
	float f = std::atof(s.c_str());
	double d = std::atof(s.c_str());
	char c = static_cast<char>(i);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << floatToString(f) << std::endl;
	std::cout << "double: " << doubleToString(d) << std::endl;
}

void handlePseudo(std::string s)
{
	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: "
			  << s
			  << ((s == "-inf" || s == "+inf" || s == "nan") ? "f" : "")
			  << std::endl;
	std::cout << "double: "
			  << ((s == "-inff" || s == "+inff") ? s.substr(0, s.length() - 1) : s)
			  << std::endl;
}

void handleInvalid(std::string)
{
	std::cerr << "\033[0;31mInvalid input\033[0m" << std::endl;
}