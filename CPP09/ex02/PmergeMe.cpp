/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:13:06 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 17:00:17 by alaparic         ###   ########.fr       */
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
	std::vector<int> vecValues = valuesToVector(argc, argv);
	std::list<int> lstValues = valuesToList(argc, argv);

	std::vector<int> orderedVec = mergeInsertVector(vecValues);
	std::list<int> orderedLst = mergeInsertList(lstValues);

	return orderedVec;
}
