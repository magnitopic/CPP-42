/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:57:53 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 18:23:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
#define DATA_HPP_

#include <iostream>

class Data
{
private:
	int integer;
	char character;
	float floating;
	Data();

public:
	Data(int value, char character, float floating);
	Data(const Data &copy);
	Data &operator=(const Data &assign);
	~Data();
};

#endif
