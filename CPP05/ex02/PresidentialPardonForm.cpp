/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:07:50 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 19:24:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: AForm("PresidentialPardonForm", 25, 5), target(copy.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
	{
		this->AForm::operator=(assign);
		this->target = assign.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &bur) const
{
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (this->getGradeExec() < bur.getGrade())
		throw GradeTooLowException();
	std::cout << "\033[0;32m" << this->target << " has been pardoned by Zaphod Beeblebrox\033[0m" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}