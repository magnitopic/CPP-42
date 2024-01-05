/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:45:09 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/05 11:52:45 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <string>

std::map<std::string, double> getFileData(char * fileName);

#endif
