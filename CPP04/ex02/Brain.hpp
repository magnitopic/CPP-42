/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:33:43 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/08 18:46:34 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &assign);
	~Brain();
};

#endif
