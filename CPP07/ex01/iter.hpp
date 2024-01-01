/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:01:05 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/01 14:59:37 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif
