/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/08 20:59:18 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include "Contact.hpp"
#include <cctype>

class PhoneBook
{
private:
	int added_contacts;
	Contact contacts[8];

public:
	void add(Contact);
	void search();
	void exit();
};

#endif
