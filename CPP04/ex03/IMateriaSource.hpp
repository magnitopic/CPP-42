/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:59:23 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/11 19:01:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(){};
	virtual void learnMateria(AMateria *) = 0;
};

#endif