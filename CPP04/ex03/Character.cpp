/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:50:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/12 16:21:14 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = copy.inventory[i];
	}
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = assign.inventory[i];
	}
	return *this;
}

Character::~Character()
{
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
