/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:19:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/29 12:24:39 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP_
#define SCALARCONVERTER_HPP_

#include <iostream>
#include <limits>

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

void toChar(std::string literal);

#endif
