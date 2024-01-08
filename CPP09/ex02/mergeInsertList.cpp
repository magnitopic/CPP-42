/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsertList.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:44:22 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 15:55:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::list<int> merge(std::list<int> leftLst, std::list<int> rightLst)
{
	std::list<int> result;

	while (leftLst.size() && rightLst.size())
	{
		if (leftLst.front() <= rightLst.front())
		{
			result.push_back(leftLst.front());
			leftLst.pop_front();
		}
		else
		{
			result.push_back(rightLst.front());
			rightLst.pop_front();
		}
	}

	while (leftLst.size())
	{
		result.push_back(leftLst.front());
		leftLst.pop_front();
	}
	while (rightLst.size())
	{
		result.push_back(rightLst.front());
		rightLst.pop_front();
	}

	return result;
}

static std::list<int> mergeSort(std::list<int> lstValues)
{
	if (lstValues.size() == 1)
		return lstValues;
	std::list<int> leftLst;
	std::list<int> rightLst;
	for (std::list<int>::iterator it = lstValues.begin(); it != lstValues.end(); it++)
	{
		if (std::distance(lstValues.begin(), it) < (int)lstValues.size() / 2)
			leftLst.push_back(*it);
		else
			rightLst.push_back(*it);
	}
	leftLst = mergeSort(leftLst);
	rightLst = mergeSort(rightLst);

	return merge(leftLst, rightLst);
}

static std::list<int> insertSort(std::list<int> lstValues)
{
	for (std::list<int>::iterator it = lstValues.begin(); it != lstValues.end(); it++)
	{
		std::list<int>::iterator it2 = it;
		while (it2 != lstValues.begin() && *std::prev(it2) > *it2)
		{
			std::iter_swap(it2, std::prev(it2));
			it2--;
		}
	}
	return lstValues;
}

std::list<int> mergeInsertList(std::list<int> lstValues)
{
	if (lstValues.size() < 10)
		return insertSort(lstValues);
	else
		return mergeSort(lstValues);
}
