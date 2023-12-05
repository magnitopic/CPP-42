/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:39:05 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/05 16:38:33 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap a = ClapTrap("ATLAS");
	ClapTrap p = ClapTrap("P-body");

	a.attack("P-body");
	p.takeDamage(0);
	p.beRepaired(1);
	a.attack("P-body");
	p.takeDamage(0);
	a.attack("P-body");
	p.takeDamage(0);
	p.beRepaired(1);
	p.beRepaired(1);
	a.attack("P-body");
	p.takeDamage(0);
	std::cout << "P-body: 'Your attacks are not very effective ATLAS'" << std::endl;
	return 0;
}
