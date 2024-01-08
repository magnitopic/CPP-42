/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:13:06 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/07 21:41:09 by alaparic         ###   ########.fr       */
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
		if (iss.fail())
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
		if (iss.fail())
			throw std::runtime_error("\033[0;31mError: invalid argument\033[0m");
		values.push_back(value);
	}
	return values;
}

void PmergeMe(int argc, char **argv)
{

	// merge insertion sort algorithm
	// using different containers for the different algorithms
	if (argc < 10)
	{
		std::vector<int> vecValues = valuesToVector(argc, argv);
	}
	else
	{
		std::list<int> lstValues = valuesToList(argc, argv);
	}
}
