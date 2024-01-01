/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:26:39 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 19:05:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

/* void leaks()
{
	system("leaks customArray");
} */

int main(void)
{
	//atexit(leaks);
	{
		Array<int> intArray(5);

		std::cout << "Default intArray: " << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;

		std::cout << "Modified intArray: " << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;
	}
	std::cout << "___________________" << std::endl;
	{
		Array<std::string> stringArray(5);
		std::cout << "stringArray: " << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "\"" << stringArray[i] << "\", ";
		std::cout << std::endl;

		std::cout << "stringArray: " << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			stringArray[i] = "CPP07";
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "\"" << stringArray[i] << "\", ";
		std::cout << std::endl;
	}
	return (0);
}