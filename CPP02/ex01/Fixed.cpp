/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:52 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 11:47:26 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed()
{
	std::cout << "\033[2;30mDefault constructor used\033[0m" << std::endl;
	this->val = 0;
}

Fixed::~Fixed()
{
	std::cout << "\033[2;30mDestructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &other_fixed)
{
	std::cout << "\033[2;30mCopy constructor called\033[0m" << std::endl;
	this->val = other_fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other_fixed)
{
	std::cout << "\033[2;30mCopy assignment operator called\033[0m" << std::endl;
	if (this != &other_fixed)
		this->val = other_fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const int num)
{
	std::cout << "\033[2;30mInt constructor called\033[0m" << std::endl;
	this->val = roundf(num * (1 << this->bits));
}

Fixed::Fixed(const float num)
{
	std::cout << "\033[2;30mFloat constructor called\033[0m" << std::endl;
	this->val = roundf(num * (1 << this->bits));
}

float Fixed::toFloat(void) const
{
	return this->val / (double)(1 << this->bits);
}

int Fixed::toInt(void) const
{
	return this->val / (double)(1 << this->bits);
}

int Fixed::getRawBits(void) const
{
	return this->val;
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat() << std::endl;
	return out;
}
