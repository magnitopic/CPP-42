/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:29:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/06 12:42:09 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

int	main(void)
{
	Zombie *zombie = newZombie("Out Of Scope");
	zombie->announce();
	randomChump("In Scope");
	delete zombie;
	return 0;
}

