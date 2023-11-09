/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:10:51 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 19:12:02 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	std::cout << "Let's do a test run" << std::endl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << std::endl
			  << "--------------------" << std::endl
			  << std::endl;

	std::cout << "Some invalid values" << std::endl
			  << std::endl;
	std::cout << "Input: waring"<<std::endl;
	harl.complain("waring");

	std::cout << "Input: testing"<<std::endl;
	harl.complain("testing");
	return 0;
}
