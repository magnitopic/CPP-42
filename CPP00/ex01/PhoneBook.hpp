/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 17:16:16 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		int		added_contacts;

	public:
		Contact	contacts[8];
		void	add(Contact);
		void	search();
		void	exit();
};
