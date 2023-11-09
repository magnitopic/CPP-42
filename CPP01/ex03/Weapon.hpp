/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:38:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 12:44:58 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

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
