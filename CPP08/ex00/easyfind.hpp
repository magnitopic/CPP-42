/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:04:31 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/03 11:54:40 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>

class NotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "\033[0;31mElement not found\033[0m";
	}
};

template <typename T>
void easyfind(T &array, int val)
{
	typename T::iterator it;
	it = std::find(array.begin(), array.end(), val);
	if (it == array.end() || *it != val)
		throw NotFoundException();
	std::cout << "\033[0;32mElement '" << val << "' found!\033[0m" << std::endl;
}

#endif
