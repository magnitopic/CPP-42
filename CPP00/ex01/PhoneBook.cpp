/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:12 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/03 15:41:37 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(Contact new_contact)
{
	this->contacts[added_contacts % 8] = new_contact;
	added_contacts++;
}

std::string printable_data(std::string value)
{
	std::string result;
	int len;

	len = value.length();
	if (len >= 10)
	{
		result = value.substr(0, 9);
		result += ".";
	}
	else
	{
		result = value;
		while (len++ < 10)
			result = " " + result;
	}
	return result;
}

void print_contacts(Contact contacts[8], int table_size)
{
	std::cout << "\033[0;33m┌──────────┬──────────┬──────────┬──────────┐" << std::endl
			  << "│\033[0;35m     Index\033[0;33m│\033[0;35mFirst Name\033[0;33m│\033[0;35m"
			  << " Last Name\033[0;33m│\033[0;35m      Nick\033[0;33m│" << std::endl;
	for (int i = 0; i < table_size; i++)
	{
		Contact contact = contacts[i];
		std::cout << "\033[0;33m├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		std::cout << "│\033[0m";
		std::cout << printable_data(std::to_string(i + 1));
		std::cout << "\033[0;33m│\033[0m";
		std::cout << printable_data(contact.get_first_name());
		std::cout << "\033[0;33m│\033[0m";
		std::cout << printable_data(contact.get_last_name());
		std::cout << "\033[0;33m│\033[0m";
		std::cout << printable_data(contact.get_nick());
		std::cout << "\033[0;33m│" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘\033[0m" << std::endl;
}

void PhoneBook::search()
{
	int table_size = this->added_contacts;
	if (this->added_contacts > 8)
		table_size = 8;
	if (table_size == 0)
	{
		std::cout << std::endl
				  << "\033[0;31mNo contacts 😔\033[0m" << std::endl;
		return;
	}
	print_contacts(this->contacts, table_size);
	std::string index;
	std::cout << std::endl
			  << "\033[0;34m>> \033[0;36mEnter index of contact to see more details: \033[0m";
	std::cout << std::endl
			  << "\033[0;34m--> \033[0m";
	std::cin >> index;
	if (index.length() == 1 && std::isdigit(index[0]) && std::stoi(index) <= table_size && std::stoi(index) != 0)
	{
		std::cout << std::endl
				  << "\033[0;35mShowing inf of contact #" << index << std::endl;
		std::cout << std::endl
				  << "\033[0mFull Name:\t\t" << contacts[std::stoi(index) - 1].get_first_name() << std::endl;
		std::cout << std::endl
				  << "First Name:\t\t" << contacts[std::stoi(index) - 1].get_last_name() << std::endl;
		std::cout << std::endl
				  << "Nick:\t\t\t" << contacts[std::stoi(index) - 1].get_nick() << std::endl;
		std::cout << std::endl
				  << "Phone Number:\t\t" << contacts[std::stoi(index) - 1].get_phone_number() << std::endl;
		std::cout << std::endl
				  << "Darkest Secret:\t\t" << contacts[std::stoi(index) - 1].get_secret() << std::endl;
	}
	else
		std::cout << "\033[0;31mNo contacts 😔\033[0m" << std::endl;
}
