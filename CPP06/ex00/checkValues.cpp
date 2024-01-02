/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkValues.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:35:26 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/02 12:37:40 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

bool checkChar(int i)
{
	if (i < 0)
		return false;
	if (i < 0 || i > 127)
		return false;
	return true;
}

bool checkInt(std::string &s)
{
	std::string maxInt = valueToString(std::numeric_limits<int>::max());
	std::string minInt = valueToString(std::numeric_limits<int>::min());

	if (!(s.find("-") == std::string::npos))
	{
		if (s.length() > minInt.length())
			return false;
		if (s.length() == minInt.length() &&
			std::strncmp(s.c_str(), minInt.c_str(), s.length()) > 0)
			return false;
		return true;
	}
	if (s.length() > maxInt.length())
		return false;
	if (s.length() == maxInt.length() &&
		std::strncmp(s.c_str(), maxInt.c_str(), s.length()) > 0)
		return false;
	return true;
}

bool checkFloat(std::string &s)
{
	std::string maxFloat = valueToString(std::numeric_limits<float>::max());
	std::string minFloat = valueToString(std::numeric_limits<float>::min());

	if (!(s.find("-") == std::string::npos))
	{
		if (s.length() > minFloat.length())
			return false;
		if (s.length() == minFloat.length() &&
			std::strncmp(s.c_str(), minFloat.c_str(), s.length()) > 0)
			return false;
		return true;
	}
	if (s.length() > maxFloat.length())
		return false;
	if (s.length() == maxFloat.length() &&
		std::strncmp(s.c_str(), maxFloat.c_str(), s.length()) > 0)
		return false;
	return true;
}
