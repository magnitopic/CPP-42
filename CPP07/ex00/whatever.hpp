/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:35:02 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 13:58:00 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return a;
	return a;
}

#endif
