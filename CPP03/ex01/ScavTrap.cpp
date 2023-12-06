/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:04:51 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/06 09:01:26 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Constructors

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "\033[2;30mDefault constructor used for ScavTrap\033[0m" << std::endl;
	this->name = "Unnamed";
	this->attackDamage = 10;
	this->hp = 100;
	this->energy = 50;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "\033[2;30mDefault constructor used for ScavTrap\033[0m" << std::endl;
	this->attackDamage = 10;
	this->hp = 100;
	this->energy = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
	: ClapTrap(copy)
{
	std::cout << "\033[2;30mCopy constructor called for ScavTrap\033[0m" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->attackDamage = copy.attackDamage;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	std::cout << "\033[2;30mCopy assignment operator called for ScavTrap\033[0m" << std::endl;
	if (this != &assign)
	{
		this->name = assign.name;
		this->hp = assign.hp;
		this->energy = assign.energy;
		this->attackDamage = assign.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[2;30mDestructor called for ScavTrap\033[0m" << std::endl;
}

// method implementations

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout << "\033[0;34mScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!\033[0m" << std::endl;
		this->energy--;
	}
}

void ScavTrap::guradGate()
{
	std::cout << "\033[0;35mScavTrap " << this->name << " is now in GateKeeper mode!\033[0m" << std::endl;
}
