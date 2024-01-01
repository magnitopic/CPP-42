/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:01:04 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 13:10:50 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static e_type checkNumType(const std::string &s)
{
	if (s.find('f') != std::string::npos)
		return FLOAT;
	if (s.find('.') != std::string::npos)
		return DOUBLE;
	return INT;
}

static bool is_numeric(const std::string &s)
{
	int i = 0;
	int len = s.length();

	// opcional check sign
	if (i < len && (s.at(i) == '+' || s.at(i) == '-'))
		i++;

	// integer part
	if (i < len && std::isdigit(s.at(i)))
	{
		while (i < len && std::isdigit(s.at(i)))
			i++;
	}
	else
		return false;

	// optional decimal part
	if (i < len && s.at(i) == '.')
	{
		i++;
		if (i < len && std::isdigit(s.at(i)))
		{
			while (i < len && std::isdigit(s.at(i)))
				i++;
		}
		else
			return false;
	}

	// optional float f
	if (i < len && s[i] == 'f')
		i++;

	// check if end reached
	return i == len;
}

e_type getType(const std::string &s)
{
	std::string pseudoLiterals[5] = {
		"-inff",
		"+inff",
		"-inf",
		"+inf",
		"nan"};
	if (is_numeric(s))
		return checkNumType(s);
	if (s.size() == 1 && std::isprint(s.at(0)))
		return CHAR;
	for (int i = 0; i < 5; i++)
		if (pseudoLiterals[i] == s)
			return PSEUDO;
	return INVALID;
}
