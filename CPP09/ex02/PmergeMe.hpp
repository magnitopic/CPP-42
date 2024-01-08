/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:13:25 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/08 17:07:48 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <sstream>
#include <ctime>

std::vector<int> PmergeMe(int argc, char **argv);
std::list<int> mergeInsertList(std::list<int> vecValues);
std::vector<int> mergeInsertVector(std::vector<int> vecValues);

#endif