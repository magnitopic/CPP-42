/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:23:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/29 20:43:36 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal)
{
	// std::cout << getType(literal) << std::endl;
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

void handleChar(std::string)
{
}

void handleInt(std::string)
{
}

void handleFloat(std::string)
{
}

void handleDouble(std::string)
{
}

void handlePseudo(std::string s)
{
	std::cout << "char: imposible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: "
			  << s
			  << ((s == "-inf" || s == "+inf") ? "f" : "")
			  << std::endl;
	std::cout << "double: "
			  << ((s == "-inff" || s == "+inff") ? s.)
}

void handleInvalid(std::string)
{
	std::cerr << "\033[0;31mInvalid input\033[0m" << std::endl;
}