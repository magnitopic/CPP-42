/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:49:34 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/07 21:05:36 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H_
#define HUMAN_B_H_

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;

public:
	void attack();
	void setWeapon(Weapon *weapon);
	HumanB(std::string name);
};

#endif
