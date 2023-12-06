/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:17:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/05 19:14:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}

/* int main(void)
{
	Fixed a(54.5f);
	Fixed b(6);
	std::cout << a.toFloat() << std::endl;
	std::cout << "Max value: " << Fixed::max(a, b) << std::endl;
	std::cout << "Min value: " << Fixed::min(a, b) << std::endl;
	Fixed c(a + b);
	std::cout << "C: " << c.toInt() << std::endl;
	std::cout << "C: " << c.toFloat() << std::endl;
	std::cout << ++a << std::endl;
	return 0;
} */
