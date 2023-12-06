/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:04:51 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/05 20:37:22 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "\033[2;30mDefault constructor used\033[0m" << std::endl;
	this->name = "Unnamed";
	this->attackDamage = 10;
	this->hp = 100;
	this->energy = 50;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "\033[2;30mDefault constructor used\033[0m" << std::endl;
	this->attackDamage = 10;
	this->hp = 100;
	this->energy = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
	: ClapTrap(copy)
{
	
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[2;30mDestructor called\033[0m" << std::endl;
}
