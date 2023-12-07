/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:21:46 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 15:57:31 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "\033[2;30mDefault constructor for Animal called\033[0m" << std::endl;
	this->type = "Generic Animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "\033[2;30mCopy constructor for Animal called\033[0m" << std::endl;
	if (this != &copy)
		this->type = copy.type;
}

Animal &Animal::operator=(const Animal &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for Animal called\033[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "\033[2;30mDestructor for Animal called\033[0m" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal noises..." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
