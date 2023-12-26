/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:57:37 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/26 20:10:50 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &bur) const;

	std::string getTarget() const;

	class FileNotOpenedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
