/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:28:08 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/03 15:50:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact new_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nick;
	std::string phone_number;
	std::string secret;

	std::cout << "Enter contact's First Name: ";
	std::cin >> first_name;
	std::cout << "Enter contact's Last Name: ";
	std::cin >> last_name;
	std::cout << "Enter contact's Nick: ";
	std::cin >> nick;
	std::cout << "Enter contact's Phone Number: ";
	std::cin >> phone_number;
	std::cout << "Enter contact's Darkest Secret: ";
	std::cin.ignore(); // add this line to clear the input buffer
	std::getline(std::cin, secret);
	return Contact(first_name, last_name, nick, phone_number, secret);
}

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
			pb.add(new_contact());
		else if (input == "SEARCH" || input == "search")
			pb.search();
		else
			std::cout << std::endl
					  << "\033[0;31mError: Invalid operation\033[0m" << std::endl;
	}

	std::cout << "\033[0;35mBye! 👋\033[0m" << std::endl;
	return 0;
}
