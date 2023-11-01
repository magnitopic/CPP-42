/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:09 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/01 19:48:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick;
		std::string	phone_number;
		std::string	secret;

	public:
		Contact(std::string first_name, std::string last_name, std::string nick,
				std::string phone_number, std::string secret);
		Contact();
};
