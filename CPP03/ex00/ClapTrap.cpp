/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:39:16 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/04 19:23:18 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor used" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other_clapTrap)
{
	if (this != &other_clapTrap)
	{
		this->name = other_clapTrap.name;
		this->health = other_clapTrap.health;
		this->energy = other_clapTrap.energy;
		this->attackDamage = other_clapTrap.attackDamage;
	}
}

ClapTrap::

	ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;31mDestructor called\033[0m" << std::endl;
}
