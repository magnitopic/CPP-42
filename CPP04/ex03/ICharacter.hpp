/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:59:01 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/13 14:32:32 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter(){};
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif
