/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:39:16 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/05 12:08:30 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor used" << std::endl;
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other_clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other_clapTrap)
	{
		this->name = other_clapTrap.name;
		this->health = other_clapTrap.health;
		this->energy = other_clapTrap.energy;
		this->attackDamage = other_clapTrap.attackDamage;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other_clapTrap)
{
	if (this != &other_clapTrap)
	{
		this->name = other_clapTrap.name;
		this->health = other_clapTrap.health;
		this->energy = other_clapTrap.energy;
		this->attackDamage = other_clapTrap.attackDamage;
	}
}

ClapTrap::ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;31mDestructor called\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " point of damage!" << std::endl;
		this->energy--;
	}
}

void ClapTrap::
