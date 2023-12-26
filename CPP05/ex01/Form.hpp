/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:47:43 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 13:38:16 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int gradeSig;
	const int gradeExec;
	Form();

public:
	Form(std::string name, int gradeSig, int gradeExec);
	Form(const Form &copy);
	Form &operator=(const Form &assign);
	~Form();

	void beSigned(Bureaucrat &bur);

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
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
