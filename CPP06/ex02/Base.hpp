/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:56:42 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/28 16:47:29 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP_
#define BASE_HPP_

#include <iostream>

class Base
{
public:
	Base(){};
	virtual ~Base(){};
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
