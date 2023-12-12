/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:58:46 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/12 12:05:20 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

class Cure
{
public:
	Cure();
	Cure(const Cure &copy);
	Cure &operator=(const Cure &assign);
	~Cure();
};

#endif
