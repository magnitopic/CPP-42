/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:05:08 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 17:01:13 by alaparic         ###   ########.fr       */
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
	std::cout << "\033[0;34mBefore: \033[0m";
	for (int i = 0; i < argc - 1; i++)
		std::cout << argv[i + 1] << " ";
	std::cout << "\033[0;34mAfter: \033[0m";
	for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++)
		std::cout << *it << " ";
	std::cout << "\033[0;34mTime to process a range of "
			  << argc - 1
			  << " elements with \033[0;32mstd::vector\033[0;34m : \033[0m"
			  << "0.0521"
			  << " \033[0;34mus\033[0m"
			  << std::endl;
	std::cout << "\033[0;34mTime to process a range of "
			  << argc - 1
			  << " elements with \033[0;32mstd::list\033[0;34m : \033[0m"
			  << "0.0075"
			  << " \033[0;34mus\033[0m"
			  << std::endl;
}
