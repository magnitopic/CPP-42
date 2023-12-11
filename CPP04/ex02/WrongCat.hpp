/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:42:22 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 16:45:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// default calss methods
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &assign);
	~WrongCat();

	void makeSound() const;
};

#endif