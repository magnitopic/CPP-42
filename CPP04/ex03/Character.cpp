/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:50:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/12 13:03:04 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
}

Character::Character(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->inventory[4];
		for (int i = 0; i < 4; i++)
			this->inventory[i] = copy.inventory[i];
	}
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
		this->inventory[4];
		for (int i = 0; i < 4; i++)
			this->inventory[i] = assign.inventory[i];
	}
	return *this;
}

Character::~Character()
{
}
