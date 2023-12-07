/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:54:44 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 16:37:55 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "\033[2;30mDefault constructor for Cat called\033[0m" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy)
	: Animal()
{
	std::cout << "\033[2;30mCopy constructor for Cat called\033[0m" << std::endl;
	if (this != &copy)
		this->type = copy.type;
}

Cat &Cat::operator=(const Cat &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for Cat called\033[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "\033[2;30mDestructor for Cat called\033[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
