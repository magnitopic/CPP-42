/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:17:16 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 12:27:28 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "\033[2;30mDefault constructor used\033[0m" << std::endl;
	this->name = "Unnamed";
	this->hp = 10;
	this->energy = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[2;30mName constructor used\033[0m" << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "\033[2;30mCopy constructor called\033[0m" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->attackDamage = copy.attackDamage;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "\033[2;30mCopy assignment operator called\033[0m" << std::endl;
	if (this != &assign)
	{
		this->name = assign.name;
		this->hp = assign.hp;
		this->energy = assign.energy;
		this->attackDamage = assign.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[2;30mDestructor called\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout << "\033[0;34mClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " point of damage!\033[0m" << std::endl;
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[0;31mClapTrap " << this->name << " was hit and has lost " << amount << " HP!\033[0m" << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout << "\033[0;32mClapTrap " << this->name << " repairs itself receiving " << amount << " HP back.\033[0m" << std::endl;
		this->energy--;
		this->hp += amount;
	}
}
