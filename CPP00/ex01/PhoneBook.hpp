/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 14:32:38 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		added_contacts;

	public:
		void	add(Contact);
		void	search();
		void	exit();
};
