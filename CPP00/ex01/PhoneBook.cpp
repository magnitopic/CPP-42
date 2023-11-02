/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:12 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 21:21:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(Contact new_contact)
{
	this->contacts[added_contacts % 8] = new_contact;
	added_contacts++;
}

std::string	printable_data(std::string value)
{
	std::string	result;
	int			len;

	len = value.length();
	if (len >=10)
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

void	PhoneBook::search()
{
	int	table_size = this->added_contacts;
	if (this->added_contacts > 8)
		table_size = 8;
	if (table_size == 0)
		std::cout << std::endl << "\033[0;31mNo contacts 😔\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;33m┌──────────┬──────────┬──────────┬──────────┐" << std::endl
		<< "│\033[0;35m     Index\033[0;33m│\033[0;35mFirst Name\033[0;33m│\033[0;35m"
		<<" Last Name\033[0;33m│\033[0;35m      Nick\033[0;33m│" << std::endl;
		for (int i = 0; i < table_size; i++)
		{
			Contact contact = this->contacts[i];
			std::cout << "\033[0;33m├──────────┼──────────┼──────────┼──────────┤" << std::endl;
			std::cout << "│\033[0m";
			std::cout << printable_data(std::to_string(i + 1));
			std::cout << "\033[0;33m│\033[0m";
			std::cout << printable_data(contact.get_first_name());
			std::cout << "\033[0;33m│\033[0m";
			std::cout << printable_data(contact.get_last_name());
			std::cout << "\033[0;33m│\033[0m";
			std::cout << printable_data(contact.get_nick());
			std::cout << "\033[0;33m│"<< std::endl;
		}
		std::cout << "└──────────┴──────────┴──────────┴──────────┘\033[0m" << std::endl;
	}
}
