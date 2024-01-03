/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:03:34 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/03 11:56:12 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(6);
	v.push_back(9);
	v.push_back(0);
	try
	{
		easyfind(v, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind(v, 9);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
