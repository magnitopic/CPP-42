/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:49:34 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/16 12:38:13 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP_
#define HUMAN_B_HPP_

#include "Weapon.hpp"
#include <iostream>

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
