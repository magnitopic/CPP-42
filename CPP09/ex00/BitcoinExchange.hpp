/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:45:09 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/09 11:59:44 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

void bitcoinExchange(char *dbName);
std::map<std::string, double> getDbValues();
std::string readFile(std::string fileName);
void parseFile(std::string data, std::map<std::string, double> dbValues);
std::map<std::string, double> getFileData(std::string fileName, char separation);
bool validateDate(std::string date);

#endif
