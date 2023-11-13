/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:10:51 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/13 14:17:00 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void info_msg(std::string msg)
{
	std::cout << std::endl
			  << "\033[0;34m>> \033[0;36m" << msg << "\033[0m" << std::endl
			  << std::endl;
}

int main(void)
{
	Harl harl;

	info_msg("Let's do a test run");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	info_msg("Some invalid values");
	std::cout << "Input: waring" << std::endl;
	harl.complain("waring");

	std::cout << "Input: testing" << std::endl;
	harl.complain("testing");

	info_msg("Input the values you'd like to try. To exit: ⌘ + d");
	std::string input;
	while (true)
	{
		std::cout << "--> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		harl.complain(input);
	}
	info_msg("Simulation ended");
	return 0;
}
