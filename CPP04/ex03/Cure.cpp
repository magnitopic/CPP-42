/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:22:19 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/19 19:58:04 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &copy)
	: AMateria(copy)
{
	(void)copy;
	this->type = "cure";
}

Cure &Cure::operator=(const Cure &assign)
{
	(void)assign;
	this->type = "cure";
	return *this;
}

Cure::~Cure()
{
}

Cure *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
