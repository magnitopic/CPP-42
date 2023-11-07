/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:38:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/06 21:30:29 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	const std::string &getType();
	void setType(std::string new_type);
	Weapon(std::string type);
	Weapon();
};

#endif
