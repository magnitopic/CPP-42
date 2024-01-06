/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:56:17 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/06 19:43:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double calculate(char operador, double val1, double val2)
{
	switch (operador)
	{
	case '+':
		return val1 + val2;
		break;
	case '-':
		return val1 - val2;
		break;
	case '*':
		return val1 * val2;
		break;
	case '/':
		return val1 / val2;
		break;
	}
	return 0;
}

double execExpression(std::string expression)
{
	std::stack<double> valStack;
	std::istringstream tokens(expression);
	std::string value;

	while (tokens >> value)
	{
		if (value == "+" || value == "-" || value == "*" || value == "/")
		{
			if (valStack.size() < 2)
				throw std::runtime_error("\033[0;31mError: Invalid expression\033[0m");
			double val2 = valStack.top();
			valStack.pop();
			double val1 = valStack.top();
			valStack.pop();
			double result = calculate(value[0], val1, val2);
			valStack.push(result);
		}
		else
		{
			double val = 0;
			std::stringstream convert(value);
			convert >> val;
			if (convert.fail())
				throw std::runtime_error("\033[0;31mError: Invalid token\033[0m");
			valStack.push(val);
		}
	}
	if (valStack.size() != 1)
		throw std::runtime_error("\033[0;31mError: Invalid expression\033[0m");
	return valStack.top();
}
