/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:52 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/04 13:04:58 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
	this->val = 0;
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

Fixed::~Fixed()
{
	std::cout << "\033[0;31mDestructor called\033[0m" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "\033[0;32mInt constructor called\033[0m" << std::endl;
	this->val = roundf(num * (1 << this->bits));
}

Fixed::Fixed(const float num)
{
	std::cout << "\033[0;32mFloat constructor called\033[0m" << std::endl;
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
	out << fixed.toFloat();
	return out;
}

// Fixed Operator overloads

// Comparison Operators

bool Fixed::operator>(const Fixed &other_fixed)
{
	return (this->bits > other_fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &other_fixed)
{
	return (this->bits < other_fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &other_fixed)
{
	return (this->bits >= other_fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &other_fixed)
{
	return (this->bits <= other_fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &other_fixed)
{
	return (this->bits == other_fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &other_fixed)
{
	return (this->bits != other_fixed.getRawBits());
}

// Arithmetic Operators

float Fixed::operator+(const Fixed &other_fixed)
{
	float result = this->toFloat() + other_fixed.toFloat();
	return result;
}

float Fixed::operator-(const Fixed &other_fixed)
{
	float result = this->toFloat() - other_fixed.toFloat();
	return result;
}

float Fixed::operator*(const Fixed &other_fixed)
{
	float result = this->toFloat() * other_fixed.toFloat();
	return result;
}

float Fixed::operator/(const Fixed &other_fixed)
{
	float result = this->toFloat() / other_fixed.toFloat();
	return result;
}

// Increment/ Decrement operators

Fixed &Fixed::operator++()
{
	this->val += 1;
	return *this;
}

Fixed &Fixed::operator--()
{
	this->val -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed aux = (*this);
	++(*this);
	return aux;
}

Fixed Fixed::operator--(int)
{
	Fixed aux = (*this);
	--(*this);
	return aux;
}

// Extra comparison functions

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}
