/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:01:04 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/29 19:11:24 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScalarConverter.hpp"
#include <regex>

static e_type checkNumType(const std::string &s)
{
	std::cout << s.find('f') << std::endl;
	return INT;
	/* if (s.find('f'))
		return FLOAT;
	if (s.find('.'))
		return DOUBLE; */
}

static bool is_numeric(const std::string &s)
{
	std::regex r("^[+-]?(?:\\d+\\.\\d+|\\d+)f?$");
	std::smatch maches;
	return std::regex_search(s, maches, r);
}

e_type getType(const std::string &s)
{
	if (is_numeric(s))
		return checkNumType(s);
	return 0;
}
