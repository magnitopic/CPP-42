/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:50:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/20 13:58:56 by alaparic         ###   ########.fr       */
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
	*this = copy;
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
		for (int i = 0; i < 4; i++)
		{
			if (assign.inventory[i] != NULL && assign.inventory[i])
				this->inventory[i] = assign.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
		for (int i = 0; i < 1024; i++)
		{
			if (assign.ground[i] != NULL && assign.ground[i])
				this->ground[i] = assign.ground[i]->clone();
			else
				this->ground[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4 && this->inventory[i]; i++)
		delete this->inventory[i];
	for (int i = 0; i < 1024 && this->ground[i]; i++)
		delete this->ground[i];
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
		if (this->inventory[i] == NULL && m != NULL)
		{
			this->inventory[i] = m->clone();
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
	else
		std::cout << "Inventory slot empty..." << std::endl;
}
