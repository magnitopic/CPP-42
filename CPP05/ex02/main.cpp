/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:24:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 12:46:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

/* void leaks()
{
	system("leaks bureaucrat");
} */

int main(void)
{
	// atexit(leaks);
	std::string target = "gaming";
	Bureaucrat *bob = new Bureaucrat("Bob", 1);
	Bureaucrat *michael = new Bureaucrat("Michael", 140);
	Bureaucrat *lvl150 = new Bureaucrat("Noob", 150);
	ShrubberyCreationForm *shruForm = new ShrubberyCreationForm(target);
	lvl150->beSigned(*shruForm);
	michael->executeForm(*shruForm);
	michael->beSigned(*shruForm);
	michael->executeForm(*shruForm);
	bob->executeForm(*shruForm);
	std::cout << *michael << std::endl;
	std::cout << *shruForm << std::endl;
	std::cout << "____________" << std::endl;
	
	delete bob;
	delete shruForm;
	delete michael;
	return 0;
}
