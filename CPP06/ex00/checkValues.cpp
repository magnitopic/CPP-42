/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkValues.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:35:26 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/06 19:03:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <sstream>
#include "ScalarConverter.hpp"

bool checkInt(std::string &s)
{
	std::istringstream convert(s);
	int value;
	convert >> value;
	return !convert.fail();
}

bool checkFloat(std::string &s)
{
	std::istringstream convert(s);
	float value;
	convert >> value;
	return !convert.fail();
}

bool checkDouble(std::string &s)
{
	std::istringstream convert(s);
	double value;
	convert >> value;
	return !convert.fail();
}
