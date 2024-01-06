/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:48:17 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/06 19:50:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

double calculate(char operador, double val1, double val2);
double execExpression(std::string expression);

#endif