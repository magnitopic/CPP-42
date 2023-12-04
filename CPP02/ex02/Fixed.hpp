/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:43 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/04 12:35:38 by alaparic         ###   ########.fr       */
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
	bool operator>(const Fixed &other_fixed);
	bool operator<(const Fixed &other_fixed);
	bool operator>=(const Fixed &other_fixed);
	bool operator<=(const Fixed &other_fixed);
	bool operator==(const Fixed &other_fixed);
	bool operator!=(const Fixed &other_fixed);

	// Arithmetic Operators
	float operator+(const Fixed &other_fixed);
	float operator-(const Fixed &other_fixed);
	float operator*(const Fixed &other_fixed);
	float operator/(const Fixed &other_fixed);

	// Increment/ Decrement operators
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	// Extra comparison functions
	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
