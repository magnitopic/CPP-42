/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:29:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/06 13:08:10 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*new_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		new_horde[i].set_name(name);
	return new_horde;
}

int	main(void)
{
	int	zombie_num = 5;
	Zombie	*the_horde = zombieHorde(zombie_num, "Michael");
	for (int i = 0; i < zombie_num; i++)
		the_horde[i].announce();
	delete[] the_horde;
	return 0;
}

