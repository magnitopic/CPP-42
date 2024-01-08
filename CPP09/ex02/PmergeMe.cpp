/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:13:06 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 17:37:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> valuesToVector(int argc, char **argv)
{
	std::vector<int> values;
	int value;
	for (int i = 1; i < argc; i++)
	{
		std::istringstream iss(argv[i]);
		iss >> value;
		if (iss.fail() || value < 0)
			throw std::runtime_error("\033[0;31mError: invalid argument\033[0m");
		values.push_back(value);
	}
	return values;
}

std::list<int> valuesToList(int argc, char **argv)
{
	std::list<int> values;
	int value;
	for (int i = 1; i < argc; i++)
	{
		std::istringstream iss(argv[i]);
		iss >> value;
		if (iss.fail() || value < 0)
			throw std::runtime_error("\033[0;31mError: invalid argument\033[0m");
		values.push_back(value);
	}
	return values;
}

void printVector(std::vector<int> vecValues)
{
	for (std::vector<int>::iterator it = vecValues.begin(); it != vecValues.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::vector<int> PmergeMe(int argc, char **argv)
{
	std::clock_t start;
	double durationVec;
	double durationLst;

	start = std::clock();
	std::vector<int> vecValues = valuesToVector(argc, argv);
	std::vector<int> orderedVec = mergeInsertVector(vecValues);
	durationVec = (std::clock() - start) / (double)CLOCKS_PER_SEC;

	start = std::clock();
	std::list<int> lstValues = valuesToList(argc, argv);
	std::list<int> orderedLst = mergeInsertList(lstValues);
	durationLst = (std::clock() - start) / (double)CLOCKS_PER_SEC;

	std::cout << "\033[0;34mBefore: \033[0m";
	printVector(vecValues);
	std::cout << "\033[0;34mAfter: \033[0m";
	printVector(orderedVec);
	std::cout << "\033[0;34mTime to process a range of "
			  << argc - 1
			  << " elements with \033[0;32mstd::vector\033[0;34m : \033[0m"
			  << durationVec * 1000
			  << " \033[0;34mms\033[0m"
			  << std::endl;
	std::cout << "\033[0;34mTime to process a range of "
			  << argc - 1
			  << " elements with \033[0;32mstd::list\033[0;34m : \033[0m"
			  << durationLst * 1000
			  << " \033[0;34mms\033[0m"
			  << std::endl;

	return orderedVec;
}
