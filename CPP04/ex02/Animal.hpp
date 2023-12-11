/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:17:38 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/11 17:36:52 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	// default class methods
	Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &assign);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
