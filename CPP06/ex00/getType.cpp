/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:01:04 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/30 12:43:34 by alaparic         ###   ########.fr       */
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
	// TODO: change this to not use regex, not availavle in cpp98
	std::regex r("^[+-]?(?:\\d+\\.\\d+|\\d+)f?$");
	std::smatch maches;
	return std::regex_search(s, maches, r);
}

e_type getType(const std::string &s)
{
	std::string pseudoLiterals[5] = {
		"-inff",
		"+inff",
		"-inf",
		"+inf",
		"nan"};
	//(is_numeric(s)) ? std::cout << "Is a number" << std::endl : std::cout << "Is not a number" << std::endl;
	if (is_numeric(s))
		return checkNumType(s);
	if (s.size() == 1 && std::isalpha(s.at(0)))
		return CHAR;
	for (int i = 0; i < 5; i++)
		if (pseudoLiterals[i] == s)
			return PSEUDO;
	return INVALID;
}
