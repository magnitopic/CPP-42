/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:50:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/13 15:36:58 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	this->name = "*Unnamed character*";
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

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	int flag = 1;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			this->inventory[i] = m;
			flag--;
			break;
		}
	}
	if (flag)
	{
		for (int i = 0; i < 1024; i++)
		{
			if (this->ground[i] == NULL)
			{
				this->ground[i] = m;
				break;
			}
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 1024; i++)
	{
		if (this->ground[i] == NULL)
		{
			this->ground[i] = this->inventory[idx];
			this->inventory[idx] = NULL;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}
