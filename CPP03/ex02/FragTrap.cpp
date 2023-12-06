/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:52:02 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/06 10:14:03 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <istream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// Constructors

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[2;30mDefault constructor used for FragTrap\033[0m" << std::endl;
	this->name = "Unnamed";
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[2;30mName constructor used for FragTrap\033[0m" << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "\033[2;30mCopy constructor called for FragTrap\033[0m" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hp = copy.hp;
		this->energy = copy.energy;
		this->attackDamage = copy.attackDamage;
	}
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	std::cout << "\033[2;30mCopy assignment operator called for FragTrap\033[0m" << std::endl;
	if (this != &assign)
	{
		this->name = assign.name;
		this->hp = assign.hp;
		this->energy = assign.energy;
		this->attackDamage = assign.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[2;30mDestructor called for FragTrap\033[0m" << std::endl;
}

// method implementations

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[0;35mFragTrap " << this->name << " high fives everyone!!\033[0m" << std::endl;
}
