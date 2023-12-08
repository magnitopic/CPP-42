/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:10:41 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/08 18:55:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/* void leaks()
{
	system("leaks Animals");
} */

int main()
{
	// atexit(leaks);
	Animal *animalList[100];
	// half of the list are Dogs
	for (int i = 0; i < 50; i++)
		animalList[i] = new Dog();
	// other half are Cats
	for (int i = 50; i < 100; i++)
		animalList[i] = new Cat();

	std::cout << "-------------------" << std::endl;

	std::cout << animalList[0]->getType() << std::endl;
	std::cout << animalList[50]->getType() << std::endl;

	Dog *testDog1 = new Dog();
	Animal testDog2 = Dog(*testDog1);
	std::cout << testDog2.getType() << std::endl;
	testDog2.makeSound();

	delete testDog1;

	std::cout << "-------------------" << std::endl;

	// delete all animals in the list
	for (int i = 0; i < 100; i++)
		delete animalList[i];
	return 0;
}
