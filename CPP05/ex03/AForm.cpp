/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:50:30 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 12:25:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeSig, int gradeExec) : name(name),
															  isSigned(false),
															  gradeSig(gradeSig),
															  gradeExec(gradeExec)
{
	if (gradeSig > 150 || gradeExec > 150)
		GradeTooLowException();
	if (gradeSig < 1 || gradeExec < 1)
		GradeTooHighException();
}

AForm::AForm(const AForm &copy) : name(copy.name),
								  isSigned(copy.isSigned),
								  gradeSig(copy.gradeSig),
								  gradeExec(copy.gradeExec) {}

AForm &AForm::operator=(const AForm &assign)
{
	if (this != &assign)
	{
		(std::string) this->name = assign.name;
		this->isSigned = assign.isSigned;
	}
	return *this;
}

AForm::~AForm() {}

void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->gradeSig)
		throw GradeTooLowException();
	this->isSigned = true;
}

std::string AForm::getName() const
{
	return this->name;
}

bool AForm::getIsSigned() const
{
	return this->isSigned;
}

int AForm::getGradeSig() const
{
	return this->gradeSig;
}

int AForm::getGradeExec() const
{
	return this->gradeExec;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "\033[0;31mGrade value too high\033[0m";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "\033[0;31mGrade value too low\033[0m";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "\033[0;31mit has not been signed \033[0m";
}

std::ostream &operator<<(std::ostream &out, const AForm &aform)
{
	out << "\033[0;34mForm '" << aform.getName() << "' needs grade " << aform.getGradeSig()
		<< " to be signed and grade " << aform.getGradeExec() << " to be executed."
		<< "It currently " << (aform.getIsSigned() ? "is" : "isn't") << " signed.\033[0m";
	return out;
}
