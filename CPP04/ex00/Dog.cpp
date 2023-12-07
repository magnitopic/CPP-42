/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:58:42 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 16:37:51 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "\033[2;30mDefault constructor for Dog called\033[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
	: Animal()
{
	std::cout << "\033[2;30mCopy constructor for Dog called\033[0m" << std::endl;
	if (this != &copy)
		this->type = copy.type;
}

Dog &Dog::operator=(const Dog &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for Dog called\033[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "\033[2;30mDestructor for Dog called\033[0m" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
