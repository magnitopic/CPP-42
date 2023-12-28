/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:35:01 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 18:16:45 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

Data::Data(int integer, char character, float floating)
	: integer(integer), character(character), floating(floating) {}

Data::Data(const Data &copy)
{
	*this = copy;
}

Data &Data::operator=(const Data &assign)
{
	if (this != &assign)
	{
		this->integer = assign.integer;
		this->character = assign.character;
		this->floating = assign.floating;
	}
	return *this;
}

Data::~Data() {}
