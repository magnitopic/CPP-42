/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 15:19:14 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

#include "Contact.hpp"
#include <cctype>
#include <iomanip>

class PhoneBook
{
private:
	int added_contacts;
	Contact contacts[8];

public:
	void add();
	void search();
	void exit();
};

#endif
