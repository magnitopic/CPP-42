/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:53:10 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 19:25:40 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
		std::cerr << "\033[0;31mInvalid number of arguments\033[0m" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return 0;
}
