/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:50:07 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/06 19:52:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "\033[0;31mError: Invalid number of arguments" << std::endl;
		std::cerr << "\t\033[0;36mUsage: ./RPN \"expression\"" << std::endl
				  << "\t\033[0;36mExample: ./RPN \"1 3 5 + -\"\033[0m" << std::endl;
		return 1;
	}
	try
	{
		std::cout << execExpression(argv[1]) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
