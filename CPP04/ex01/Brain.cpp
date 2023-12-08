/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:59:34 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/08 18:46:24 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[2;30mDefault constructor for Brain called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "An amazing and life changing idea";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "\033[2;30mCopy constructor for Brain called\033[0m" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &assign)
{
	std::cout << "\033[2;30mCopy assignment operator for Brain called\033[0m" << std::endl;
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = assign.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "\033[2;30mDestructor for Brain called\033[0m" << std::endl;
}
