/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:29:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/06 14:48:26 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int zombie_num = 5;
	Zombie *the_horde = zombieHorde(zombie_num, "Michael");
	for (int i = 0; i < zombie_num; i++)
		the_horde[i].announce();
	delete[] the_horde;
	return 0;
}
