/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:43 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/17 12:30:04 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H_
#define FIXED_H_

#include <iostream>

class Fixed
{
private:
	int num_val;
	static const int fract_num;

public:
	// default constructor
	Fixed();
	// copy constructor
	Fixed(const Fixed &other_fixed);
	// copy assignment operator
	Fixed &operator=(const Fixed &other_fixed);
	// destructor
	~Fixed();
};

#endif