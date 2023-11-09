/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:28:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/09 14:59:55 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		std::string msg = "";
		for (int i = 1; i < argc ; i++)
		{
			for (int j = 0; j < int(std::strlen(argv[i])); j++)
				msg += std::toupper(argv[i][j]);
			msg += " ";
		}
		std::cout << msg;
	}
	std::cout << std::endl;
	return 0;
}
