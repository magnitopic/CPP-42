/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:24:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 20:18:10 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::string target = "gaming";
	Bureaucrat *bob = new Bureaucrat("Bob", 1);
	Bureaucrat *michael = new Bureaucrat("Michael", 140);
	ShrubberyCreationForm *shruForm = new ShrubberyCreationForm(target);
	try
	{
		shruForm->beSigned(*bob);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		shruForm->execute(*michael);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		shruForm->execute(*bob);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete bob;
	delete shruForm;
	return 0;
}
