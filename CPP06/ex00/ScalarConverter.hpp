/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:19:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/29 19:11:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SCALARCONVERTER_HPP_
#define SCALARCONVERTER_HPP_

#include <iostream>
#include <limits>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN
};

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

// program function declarations
e_type getType(const std::string &s);

#endif
