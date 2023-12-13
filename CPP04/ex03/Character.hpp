/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:44:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/13 15:04:14 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	AMateria *ground[1024];

public:
	Character();
	Character(const Character &copy);
	Character &operator=(const Character &assign);
	~Character();

	Character(std::string name);

	// Interface methods
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
