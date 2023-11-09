/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:09 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 12:44:08 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick;
	std::string phone_number;
	std::string secret;

public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nick,
			std::string phone_number, std::string secret);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick();
	std::string get_phone_number();
	std::string get_secret();
};

#endif
