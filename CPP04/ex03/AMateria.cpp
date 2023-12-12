/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:08:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/11 20:31:22 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	if (this != &copy)
		this->type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

const std::string &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
}
