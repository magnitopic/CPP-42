/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:13:26 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/06 10:10:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a = FragTrap("ATLAS");
	ScavTrap p = ScavTrap("P-body");

	p.guradGate();
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	p.beRepaired(5);
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	a.highFivesGuys();
	return 0;
}
