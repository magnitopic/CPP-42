/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:31:55 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/11 20:45:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef ICE_HPP_
#define ICE_HPP_

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &assign);
	~Ice();

	
};

#endif