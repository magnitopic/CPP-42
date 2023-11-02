/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:28:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/02 12:23:38 by alaparic         ###   ########.fr       */
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
		for (int i = 1; i < argc ; i++)
		{
			for (int j = 0; j < int(std::strlen(argv[i])); j++)
				std::cout << char(std::toupper(argv[i][j]));
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}
