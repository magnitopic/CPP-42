/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:57:29 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/03 16:44:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Span.hpp"

int main()
{
	int len = 50000;

	Span sp = Span(len);
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		int rnd = rand() % 100;
		sp.addNumber(rnd);
	}
	sp.print();
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	return 0;
}

/* int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
} */
