/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:39:26 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/05 16:02:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hp;
	int energy;
	int attackDamage;

public:
	// default class methods
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other_clapTrap);
	ClapTrap &operator=(const ClapTrap &other_clapTrap);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif