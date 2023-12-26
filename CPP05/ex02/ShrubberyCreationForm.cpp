/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:56:05 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 20:17:57 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: AForm(copy), target(copy.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this != &assign)
	{
		this->AForm::operator=(assign);
		this->target = assign.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &bur) const
{
	std::cout << "Test: " << this->getGradeExec() << "  " << bur.getGrade() << std::endl;
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (this->getGradeExec() < bur.getGrade())
		throw GradeTooLowException();
	std::string fileName = this->target + "_shrubbery";
	std::ofstream out_file(fileName);
	if (!out_file.is_open())
		return throw FileNotOpenedException();
	for (int i = 0; i < 5; i++)
	{
		out_file << "    _\\/_" << std::endl
				 << "     /\\" << std::endl
				 << "     /\\" << std::endl
				 << "    /  \\" << std::endl
				 << "    /~~\\o" << std::endl
				 << "   /o   \\" << std::endl
				 << "  /~~*~~~\\" << std::endl
				 << " o/    o \\" << std::endl
				 << " /~~~~~~~~\\" << std::endl
				 << "/__*_______\\" << std::endl
				 << "     ||" << std::endl
				 << "   \\====/" << std::endl
				 << "    \\__/" << std::endl
				 << std::endl;
	}
	out_file.close();
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

const char *ShrubberyCreationForm::FileNotOpenedException::what() const throw()
{
	return "\033[0;31mError: File was not able to be opened\033[0m";
}
