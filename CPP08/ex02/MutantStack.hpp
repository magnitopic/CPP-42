/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:34:01 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/05 11:22:28 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <time.h>

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

	typedef typename std::stack<int>::container_type::const_iterator const_iterator;
	const_iterator cbegin() const
	{
		return this->c.cbegin();
	}
	const_iterator cend() const
	{
		return this->c.cend();
	}

	typedef typename std::stack<int>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}

	reverse_iterator rend()
	{
		return this->c.rend();
	}

	typedef typename std::stack<int>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator crbegin() const
	{
		return this->c.crbegin();
	}

	const_reverse_iterator crend() const
	{
		return this->c.crend();
	}
};

#endif
