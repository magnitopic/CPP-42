/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:43 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/28 12:59:18 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H_
#define FIXED_H_

#include <iostream>

class Fixed
{
private:
	int val;
	static const int bits = 8;

public:
	// default constructor
	Fixed();
	// copy constructor
	Fixed(const Fixed &other_fixed);
	// copy assignment operator
	Fixed &operator=(const Fixed &other_fixed);
	// destructor
	~Fixed();

	Fixed(const int num);
	Fixed(const float num);

	float toFloat(void) const;
	int toInt(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

	// Comparison operators
	bool &operator>(const Fixed &other_fixed);
	bool &operator<(const Fixed &other_fixed);
	bool &operator>=(const Fixed &other_fixed);
	bool &operator<=(const Fixed &other_fixed);
	bool &operator==(const Fixed &other_fixed);
	bool &operator!=(const Fixed &other_fixed);
	
	// Arithmetic Operators
	Fixed &operator+(const Fixed &other_fixed);
	Fixed &operator-(const Fixed &other_fixed);
	Fixed &operator*(const Fixed &other_fixed);
	Fixed &operator/(const Fixed &other_fixed);

	// Increment/ Decrement operators
	Fixed &operator++(const Fixed &other_fixed);
	Fixed &operator--(const Fixed &other_fixed);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
