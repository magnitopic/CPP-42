/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:13:26 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/06 08:53:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("ATLAS");
	ScavTrap p = ScavTrap("P-body");

	p.guradGate();
	a.attack("P-body");
	p.takeDamage(0);
	std::cout << "P-body: 'Now it's my turn'" << std::endl;
	p.attack("ATLAS");
	a.takeDamage(10);
	a.attack("P-body");
	p.beRepaired(1);
	p.beRepaired(1);
	return 0;
}
