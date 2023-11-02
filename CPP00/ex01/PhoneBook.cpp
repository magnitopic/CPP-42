/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:12 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 14:52:08 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(Contact new_contact)
{
	this->contacts[added_contacts % 8] = new_contact;
	added_contacts++;
}

void	printable_data(std::string value)
{
	
}

void	PhoneBook::search()
{
	
	for (int i = 0; i < sizeof(this->contacts); i++)
	{
		Contact contact = this->contacts[i];
		std::cout << "|";
		std::cout << printable_data(contact.get_first_name());
		std::cout << "|";
		std::cout << printable_data(contact.last_name);
		std::cout << "|";
		std::cout << printable_data(contact.get_first_name());
		std::cout << "|";
		std::cout << printable_data(contact.get_first_name());
		std::cout << "|";
	}
}
