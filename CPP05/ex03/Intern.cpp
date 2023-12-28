/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:35:22 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 12:00:48 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern &Intern::operator=(const Intern &assign)
{
	(void)assign;
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string available_forms[3] =
		{
			"ShrubberyCreationForm",
			"RobotomyRequestForm",
			"PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
	{
		if (formName == available_forms[i])
		{
			std::cout << "\033[0;36mIntern creates " << formName << "\033[0m" << std::endl;
			switch (i)
			{
			case 0:
				return new ShrubberyCreationForm(target);
				break;
			case 1:
				return new RobotomyRequestForm(target);
				break;
			case 2:
				return new PresidentialPardonForm(target);
				break;
			}
		}
	}
	std::cerr << "\033[0;31mError: Form name not found\033[0m" << std::endl;
	return NULL;
}
