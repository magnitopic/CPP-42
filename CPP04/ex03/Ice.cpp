/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:25:00 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/20 15:14:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice &copy)
	: AMateria(copy)
{
	*this = copy;
}

Ice &Ice::operator=(const Ice &assign)
{
	(void)assign;
	this->type = "ice";
	return *this;
}

Ice::~Ice()
{
}

Ice *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
