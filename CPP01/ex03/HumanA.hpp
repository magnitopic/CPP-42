/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:47:27 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 12:44:46 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP_
#define HUMAN_A_HPP_

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &weapon;
	std::string name;

public:
	void attack();
	void setWeapon(Weapon &weapon);
	HumanA(std::string name, Weapon &weapon);
};

#endif