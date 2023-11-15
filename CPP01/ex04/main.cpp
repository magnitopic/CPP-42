/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:08:33 by alaparic          #+#    #+#             */
/*   Updated: 2023/11/15 13:01:15 by alaparic         ###   ########.fr       */
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

std::string ft_replace(std::string original, std::string s1, std::string s2)
{
	std::string new_str = "";

	size_t pos = original.find(s1);
	while (pos != std::string::npos)
	{
		new_str += original.substr(0, pos);
		new_str += s2;
		original = original.substr(pos + s1.length(), original.length());
		pos = original.find(s1);
	}
	new_str += original;
	return new_str;
}

int main(int argc, char **argv)
{
	std::string og_str = "";

	if (argc != 4)
		return raise_error("Program takes 3 parameters: filename, string1, string2");
	std::ifstream og_file(argv[1]);
	if (!og_file.is_open())
		return raise_error("Unable to open file");
	while (og_file)
		og_str += og_file.get();
	og_str = og_str.substr(0, og_str.size() - 1); // This removes EOF char at the end

	std::string out_file_name = argv[1];
	out_file_name += ".replace";
	std::ofstream out_file(out_file_name);
	if (!out_file.is_open())
		return raise_error("Unable to open file");
	out_file << ft_replace(og_str, argv[2], argv[3]);
	og_file.close();
	out_file.close();
	return 0;
}
