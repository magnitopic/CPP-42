/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:21:46 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 17:01:14 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[2;30mDefault constructor for WrongAnimal called\033[0m" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "\033[2;30mCopy constructor for WrongAnimal called\033[0m" << std::endl;
	if (this != &copy)
		this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for WrongAnimal called\033[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[2;30mDestructor for WrongAnimal called\033[0m" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic WrongAnimal noises..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
