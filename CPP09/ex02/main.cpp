/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:05:08 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 17:39:00 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "\033[0;31mError: no arguments provided\033[0m" << std::endl;
		return 1;
	}
	std::vector<int> result;
	try
	{
		result = PmergeMe(argc, argv);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
