/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:04:58 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 18:43:07 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data(5, 'M', 5.0);
	std::cout << data << std::endl;
	uintptr_t result = Serializer::serialize(data);
	std::cout << result << std::endl;
	Data *hola =  Serializer::deserialize(result);
	std::cout << hola << std::endl;
	delete data;
	return 0;
}
