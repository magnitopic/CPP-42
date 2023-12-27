/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:28:28 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/27 19:38:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:
	
	
public:
	Intern();
	Intern(const Intern &copy);
	Intern &operator=(const Intern &assign);
	~Intern();

	AForm *makeForm(std::string formName, std::string target);
};

#endif
