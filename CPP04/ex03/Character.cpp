/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:50:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/19 19:45:03 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	this->name = "*Unnamed character*";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->ground[i] = NULL;
}

Character::Character(const Character &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = copy.inventory[i];
		for (int i = 0; i < 1024; i++)
			this->ground[i] = copy.ground[i];
	}
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = assign.inventory[i];
		for (int i = 0; i < 1024; i++)
			this->ground[i] = assign.ground[i];
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	for (int i = 0; i < 1024; i++)
	{
		if (this->ground[i] != NULL)
			delete this->ground[i];
	}
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->ground[i] = NULL;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx] == NULL)
		return;
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
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
