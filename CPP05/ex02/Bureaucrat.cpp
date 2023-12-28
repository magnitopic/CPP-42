/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:23:22 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 16:10:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
	{
		if (assign.grade > 150)
			throw GradeTooLowException();
		if (assign.grade < 1)
			throw GradeTooHighException();
		(std::string) this->name = assign.name;
		this->grade = assign.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::beSigned(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "\033[0;33m" << this->name << " signed " << form.getName() << "\033[0m" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[0;31m" << this->name << " couldn't sign " << form.getName()
				  << " because " << e.what() << "\033[0m" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "\033[0;32m" << name << " executed " << form.getName() << "\033[0m" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "\033[0;31m" << name << " couldn't execute " << form.getName()
				  << " because " << e.what() << "\033[0m" << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "\033[0;31mBureaucrat Error: Grade value too high\033[0m";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "\033[0;31mBureaucrat Error: Grade value too low\033[0m";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << "\033[0;34m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\033[0m";
	return out;
}
