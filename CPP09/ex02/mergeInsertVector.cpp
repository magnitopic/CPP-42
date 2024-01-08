/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsertVector.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:44:09 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 16:00:05 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::vector<int> merge(std::vector<int> leftVec, std::vector<int> rightVec)
{
	std::vector<int> result;

	while (leftVec.size() && rightVec.size())
	{
		if (leftVec.front() <= rightVec.front())
		{
			result.push_back(leftVec.front());
			leftVec.erase(leftVec.begin());
		}
		else
		{
			result.push_back(rightVec.front());
			rightVec.erase(rightVec.begin());
		}
	}

	while (leftVec.size())
	{
		result.push_back(leftVec.front());
		leftVec.erase(leftVec.begin());
	}
	while (rightVec.size())
	{
		result.push_back(rightVec.front());
		rightVec.erase(rightVec.begin());
	}

	return result;
}

static std::vector<int> mergeSort(std::vector<int> vecValues)
{
	if (vecValues.size() == 1)
		return vecValues;
	std::vector<int> leftVec;
	std::vector<int> rightVec;
	for (std::vector<int>::iterator it = vecValues.begin(); it != vecValues.end(); it++)
	{
		if (it < vecValues.begin() + vecValues.size() / 2)
			leftVec.push_back(*it);
		else
			rightVec.push_back(*it);
	}
	leftVec = mergeSort(leftVec);
	rightVec = mergeSort(rightVec);

	return merge(leftVec, rightVec);
}

static std::vector<int> insertSort(std::vector<int> vecValues)
{
	for (std::vector<int>::iterator it = vecValues.begin(); it != vecValues.end(); it++)
	{
		std::vector<int>::iterator it2 = it;
		while (it2 != vecValues.begin() && *(it2 - 1) > *it2)
		{
			std::iter_swap(it2, it2 - 1);
			it2--;
		}
	}
	return vecValues;
}

std::vector<int> mergeInsertVector(std::vector<int> vecValues)
{
	if (vecValues.size() < 10)
		return insertSort(vecValues);
	else
		return mergeSort(vecValues);
}
