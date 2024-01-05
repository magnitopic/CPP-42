/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:33:11 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/05 12:15:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "\033[0;31mError: Number of arguments invalid\033[0m" << std::endl;
		return 1;
	}
	try
	{
		std::map<std::string, double> fileContent = getFileData(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// 
	return 0;
}
