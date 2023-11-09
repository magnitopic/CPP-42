/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:11:08 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 19:11:31 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	void (Harl::*complain_functions[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string valid_complaints[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	bool flag = 1;
	for (int i = 0; i < valid_complaints->length() - 1; i++)
	{
		if (level.compare(valid_complaints[i]) == 0)
		{
			(this->*complain_functions[i])();
			flag = !flag;
		}
	}
	if (flag)
		std::cout << "\033[0;31m'" << level << "' is an invalid complaint level!\033[0m" << std::endl;
}

void Harl::debug()
{
	std::cout << "\033[0;35mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "\033[0;34mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\033[0m" << std::endl;
}

void Harl::warning()
{
	std::cout << "\033[0;33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m" << std::endl;
}

void Harl::error()
{
	std::cout << "\033[0;31mThis is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
}
