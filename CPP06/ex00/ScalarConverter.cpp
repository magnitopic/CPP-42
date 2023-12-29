/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:23:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/29 12:26:17 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal)
{
	// cast the passed literal to the 4 scalar types
	std::cout << literal << std::endl;
	toChar(literal);
}

void toChar(std::string )
{
	//if (std::numeric_limits<char>::max())
		
	std::cout << "holas" << std::endl;
}