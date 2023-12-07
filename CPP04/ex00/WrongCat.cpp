/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:42:14 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 16:54:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	std::cout << "\033[2;30mDefault constructor for WrongCat called\033[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
	: WrongAnimal()
{
	std::cout << "\033[2;30mCopy constructor for WrongCat called\033[0m" << std::endl;
	if (this != &copy)
		this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for WrongCat called\033[0m" << std::endl;
	if (this != &assign)
		this->type = assign.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[2;30mDestructor for WrongCat called\033[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
