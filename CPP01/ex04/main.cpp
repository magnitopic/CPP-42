/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:08:33 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/08 21:09:49 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int raise_error(std::string msg)
{
	std::cout << "\033[0;31mError: " << msg << "\033[0m" << std::endl;
	return 1;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return raise_error("Program takes 3 parameters: filename, string1, string 2");
	std::ifstream original_file(argv[1]);
	std::string buffer;
	//std::cout << buffer << std::endl;
	while (std::getline(original_file, buffer))
	{
		
	}
	original_file.close();
	return 0;
}
