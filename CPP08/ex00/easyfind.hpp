/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:04:31 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/02 19:53:46 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>

template <typename T>
bool easyfind(T array, int pos)
{
	for (int i = 0; int array.length(); i++)
	{
		if (array[i] == pos)
		{
			std::cout << "Found!" << std::endl;
			return true;
		}
	}
	std::cout << "Not found..." << std::endl;
	return false;
}

#endif
