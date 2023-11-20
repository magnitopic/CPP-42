/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:52 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/20 12:58:36 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
	this->val = 0;
}

Fixed::~Fixed()
{
	std::cout << "\033[0;31mDestructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &other_fixed)
{
	std::cout << "\033[0;32mCopy constructor called\033[0m" << std::endl;
	this->val = other_fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other_fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other_fixed)
		this->val = other_fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->val;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}
