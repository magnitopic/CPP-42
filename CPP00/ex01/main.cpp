/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:28:08 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 15:14:44 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook pb = PhoneBook();
	std::string input;

	std::cout << std::endl
			  << "\033[0;35mWelcome to your PhoneBook!\033[0m" << std::endl;
	while (true)
	{
		std::cout << std::endl
				  << "\033[0;34m>> ";
		std::cout << "\033[0;36mPlease enter what operation you would like to perform"
				  << std::endl
				  << "ADD / SEARCH / EXIT" << std::endl
				  << "\033[0;34m--> \033[0m";
		std::cin >> input;
		if (input == "EXIT" || input == "exit" || std::cin.eof())
			break;
		if (input == "add" || input == "ADD")
			pb.add();
		else if (input == "SEARCH" || input == "search")
			pb.search();
		else
			std::cout << std::endl
					  << "\033[0;31mError: Invalid operation\033[0m" << std::endl;
	}

	std::cout << "\033[0;35mBye! 👋\033[0m" << std::endl;
	return 0;
}
