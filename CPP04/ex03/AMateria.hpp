/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:51:50 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/11 18:47:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &assign);
	~AMateria();

	AMateria(std::string const &type);
	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif