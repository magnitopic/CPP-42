/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:28:08 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/01 19:52:32 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	pb = PhoneBook();
	int			flag = 1;
	std::string	input;

	while (flag)
	{
		std::cout << ">> Please enter what operation you would like to perform"
			<< std::endl << "ADD / SEARCH / EXIT" << std::endl;
		std::cout << "--> ";
		std::cin >> input;
		if (input == "EXIT" || input == "exit")
			break;
		if (input != "add" || input != "search")
			std::cout << std::endl << "\033[0;31mError: Invalid operation\033[0m" << std::endl;
	}
	std::cout << "Bye" << std::endl;
	return 0;
}
