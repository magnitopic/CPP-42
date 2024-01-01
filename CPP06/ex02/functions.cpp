/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:52:49 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 19:13:02 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int rnd = rand() % 3;
	switch (rnd)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break;
	}
	return NULL;
}

void identify(Base *p)
{
	if (A *newP = dynamic_cast<A *>(p))
		std::cout << "Pointer points to A class" << std::endl;
	else if (B *newP = dynamic_cast<B *>(p))
		std::cout << "Pointer points to B class" << std::endl;
	else if (C *newP = dynamic_cast<C *>(p))
		std::cout << "Pointer points to a C class" << std::endl;
	else
		std::cerr << "\033[0;31mPointer points to an unknown type\033[0m" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &newP = dynamic_cast<A &>(p);
		(void)newP;
		std::cout << "Reference to a A class" << std::endl;
		return;
	}
	catch (...)
	{
	}
	try
	{
		B &newP = dynamic_cast<B &>(p);
		(void)newP;
		std::cout << "Reference to a B class" << std::endl;
		return;
	}
	catch (...)
	{
	}
	try
	{
		C &newP = dynamic_cast<C &>(p);
		(void)newP;
		std::cout << "References to a C class" << std::endl;
		return;
	}
	catch (...)
	{
	}
	std::cerr << "\033[0;31mReference to an unknown type\033[0m" << std::endl;
}
