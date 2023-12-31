/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:24:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 19:33:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* void leaks()
{
	system("leaks bureaucrat");
} */

int main(void)
{
	// atexit(leaks);
	std::string target;
	Bureaucrat *bob = new Bureaucrat("Bob", 1);

	{
		target = "gaming";
		Bureaucrat *michael = new Bureaucrat("Michael", 140);
		ShrubberyCreationForm *shruForm = new ShrubberyCreationForm(target);
		michael->executeForm(*shruForm);
		michael->beSigned(*shruForm);
		michael->executeForm(*shruForm);
		bob->executeForm(*shruForm);
		std::cout << *michael << std::endl;
		std::cout << *shruForm << std::endl;
		delete michael;
		delete shruForm;
	}
	std::cout << "____________" << std::endl;
	{
		target = "Atlas";
		Bureaucrat *hugh = new Bureaucrat("Hugh", 70);
		RobotomyRequestForm *robForm = new RobotomyRequestForm(target);
		hugh->beSigned(*robForm);
		hugh->executeForm(*robForm);
		bob->executeForm(*robForm);
		delete hugh;
		delete robForm;
	}
	std::cout << "____________" << std::endl;
	{
		target = "SpiderMan";
		Bureaucrat *ceferino = new Bureaucrat("Ceferino", 20);
		PresidentialPardonForm *prpaForm = new PresidentialPardonForm(target);
		ceferino->beSigned(*prpaForm);
		ceferino->executeForm(*prpaForm);
		bob->executeForm(*prpaForm);
		delete ceferino;
		delete prpaForm;
	}
	delete bob;
	return 0;
}
