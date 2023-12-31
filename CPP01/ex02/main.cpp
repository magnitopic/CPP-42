/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:46:19 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/06 20:33:22 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Original: " << &str << std::endl;
	std::cout << "Pointer: " << ptr << std::endl;
	std::cout << "Reference: " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "Original: " << str << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;
	return 0;
}
