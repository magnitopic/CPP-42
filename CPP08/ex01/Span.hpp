/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:58:07 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/03 15:45:53 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>
#include <iterator>
#include <limits>
#include <algorithm>

class Span
{
private:
	unsigned int size;
	std::vector<int> v;
	Span();

public:
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &assign);
	~Span();

	void addNumber(int newNum);
	void addNumbers(std::vector<int> vector);

	int shortestSpan();
	int longestSpan();

	void print();

	class SpanFullExpection : public std::exception
	{
	public:
		const char *chat() const throw();
	};

	class SpanTooSmallException : public std::exception
	{
	public:
		const char *chat() const throw();
	};
};

#endif
