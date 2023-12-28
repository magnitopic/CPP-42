/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:50:17 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 17:00:52 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include <iostream>
#include "Data.hpp"

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &copy);
	Serializer &operator=(const Serializer &assign);

public:
	~Serializer();

	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif
