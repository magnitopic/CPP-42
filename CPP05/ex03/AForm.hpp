/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:51:13 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 11:49:30 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP_
#define AFORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool isSigned;
	const int gradeSig;
	const int gradeExec;
	AForm();

public:
	AForm(std::string name, int gradeSig, int gradeExec);
	AForm(const AForm &copy);
	AForm &operator=(const AForm &assign);
	virtual ~AForm();

	void beSigned(Bureaucrat &bur);
	virtual void execute(Bureaucrat const &executor) const = 0;

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeSig() const;
	int getGradeExec() const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &aform);

#endif
