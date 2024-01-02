/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkValues.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:35:26 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/02 13:20:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <limits>
#include <sstream>
#include "ScalarConverter.hpp"

bool checkInt(std::string &s)
{
	std::istringstream iss(s);
	int value;
	iss >> value;
	return !iss.fail();
}

bool checkFloat(std::string &s)
{
	std::istringstream iss(s);
	float value;
	iss >> value;
	return !iss.fail();
}

bool checkDouble(std::string &s)
{
	std::istringstream iss(s);
	double value;
	iss >> value;
	return !iss.fail();
}
