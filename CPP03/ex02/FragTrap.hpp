/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:27:07 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/06 09:55:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	// default class methods
	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &assign);
	~FragTrap();

	FragTrap(std::string name);
	void highFivesGuys(void);
};

#endif
