/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:56:10 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 15:37:10 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSig, int gradeExec) : name(name),
															isSigned(false),
															gradeSig(gradeSig),
															gradeExec(gradeExec)
{
	if (gradeSig > 150 || gradeExec > 150)
		GradeTooLowException();
	if (gradeSig < 1 || gradeExec < 1)
		GradeTooHighException();
}

Form::Form(const Form &copy) : name(copy.name),
							   isSigned(copy.isSigned),
							   gradeSig(copy.gradeSig),
							   gradeExec(copy.gradeExec) {}

Form &Form::operator=(const Form &assign)
{
	if (this != &assign)
	{
		(std::string) this->name = assign.name;
		this->isSigned = assign.isSigned;
	}
	return *this;
}

Form::~Form() {}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->gradeSig)
	{
		bur.beSigned(this->name, "bureaucrat grade to low.");
		throw GradeTooLowException();
	}
	this->isSigned = true;
	bur.beSigned(this->name, "");
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getGradeSig() const
{
	return this->gradeSig;
}

int Form::getGradeExec() const
{
	return this->gradeExec;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "\033[0;31mForm Error: Grade value too high\033[0m";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "\033[0;31mForm Error: Grade value too low\033[0m";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "\033[0;34mForm '" << form.getName() << "' needs grade " << form.getGradeSig()
		<< " to be signed and grade " << form.getGradeExec() << " to be executed."
		<< "It currently " << (form.getIsSigned() ? "is" : "isn't") << " signed.\033[0m";
	return out;
}
