/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:51:48 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/07 16:00:02 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	// default calss methods
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &assign);
	~Cat();

	void makeSound() const;
};

#endif
