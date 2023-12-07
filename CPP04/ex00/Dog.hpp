/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:36:07 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 15:59:58 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	// default class methods
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &assign);
	~Dog();

	void makeSound() const;
};

#endif
