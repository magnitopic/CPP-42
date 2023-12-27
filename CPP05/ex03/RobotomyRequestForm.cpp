/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:57:06 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 17:29:30 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
	: AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm("RobotomyRequestForm", 72, 45), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
	{
		this->AForm::operator=(assign);
		this->target = assign.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &bur) const
{
	if (!this->getIsSigned())
		throw FormNotSignedException();
	if (this->getGradeExec() < bur.getGrade())
		throw GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "\033[2;30m* LOUD AND UNBEARABLE DRILLING NOISES *\033[0;32m" << std::endl;
		std::cout << this->target << " has been robotomized successfully\033[0m" << std::endl;
	}
	else
		std::cout << "\033[0;31mRobotomy for " << target << " failed\033[0m" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}
