/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:01 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 17:27:11 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(std::string first_name, std::string last_name,
		std::string nick, std::string phone_number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick = nick;
	this->phone_number = phone_number;
	this->secret = secret;
}

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_last_name()
{
	return this->last_name;
}

std::string Contact::get_nick()
{
	return this->nick;
}

std::string Contact::get_phone_number()
{
	return this->phone_number;
}

std::string Contact::get_secret()
{
	return this->secret;
}
