/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:34:01 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/03 18:15:32 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(){};

	MutantStack(const MutantStack &copy)
	{
		*this = copy;
	}

	MutantStack &operator=(const MutantStack &assign)
	{
		if (this != &assign)
			*this->c = assign.c;

		return (*this);
	}

	virtual ~MutantStack(){};

	typedef typename std::stack<int>::container_type::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}
};

#endif
