/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:51:59 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 15:03:28 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void testFun(T &x)
{
	x += 1;
}

template <typename T>
void printValues(T *array, int len)
{
	for (int i = 0; i < len - 1; i++)
		std::cout << array[i] << ", ";
	std::cout << array[len - 1] << std::endl;
}

int main()
{
	{
		int arr[] = {1, 2, 3, 4, 5};
		printValues(arr, 5);
		iter(arr, 5, testFun);
		printValues(arr, 5);
	}
	std::cout << "__________________" << std::endl;
	{
		char arr[] = {'a', 'b', 'c'};
		printValues(arr, 3);
		iter(arr, 3, testFun);
		printValues(arr, 3);
	}
	std::cout << "__________________" << std::endl;
	{
		float arr[] = {78.45f, 42.69f, 85.1f};
		printValues(arr, 3);
		iter(arr, 3, testFun);
		printValues(arr, 3);
	}
	return 0;
}
