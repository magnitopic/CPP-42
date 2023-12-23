/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:24:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/23 16:58:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *bob = new Bureaucrat("Bob", 2);
	std::cout << bob->getName() << std::endl;
	std::cout << bob->getGrade() << std::endl;
	bob->incrementGrade();
	try
	{
		bob->incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bob << std::endl;
	delete bob;
	return 0;
}
