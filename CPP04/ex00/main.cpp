/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:10:41 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 17:00:45 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	std::cout << "------------------" << std::endl;
	const WrongAnimal *incorrect1 = new WrongAnimal();
	const WrongAnimal *incorrect2 = new WrongCat();
	std::cout << incorrect1->getType() << std::endl;
	std::cout << incorrect2->getType() << std::endl;
	incorrect1->makeSound();
	incorrect2->makeSound();
	delete incorrect1;
	delete incorrect2;
	return 0;
}
