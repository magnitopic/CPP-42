/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:42:38 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/07 10:42:21 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void bitcoinExchange(char *fileName)
{
	std::map<std::string, double> dbValues = getDbValues();
	std::string fileContent = readFile(fileName);
	parseFile(fileContent, dbValues);
}

std::map<std::string, double> getDbValues()
{
	std::string fileContent = readFile("data.csv");
	std::map<std::string, double> dbValues;
	std::istringstream iss(fileContent);
	std::string key;
	double value;
	std::string line;

	while (std::getline(iss, line, '\n'))
	{
		if (line == "date,exchange_rate")
			continue;
		if (line.find(',') != std::string::npos)
		{
			std::istringstream iss2(line);
			std::getline(iss2, key, ',');
			std::string valueStr;
			std::getline(iss2, valueStr, ',');
			std::stringstream convert(valueStr);
			convert >> value;
			if (convert.fail())
				throw std::runtime_error("\033[0;31mError: Invalid value in database\033[0m");
			else
				dbValues[key] = value;
		}
		else if (line != "")
			throw std::runtime_error("\033[0;31mError: Invalid line in database\033[0m");
	}

	return dbValues;
}

std::string readFile(std::string fileName)
{
	std::string fileContent;

	std::ifstream file(fileName);
	if (!file.is_open())
		throw std::runtime_error("\033[0;31mError: Unable to open file\033[0m");
	while (file)
	{
		char a = file.get();
		fileContent += a;
	}
	fileContent.pop_back(); // remove eof char
	return fileContent;
}

void printValue(std::string key, double value,
				std::map<std::string, double> dbValues)
{
	std::
	std::cout << key << " => " << value <<  << std::endl;
}

bool validateDate(std::string date)
{
	// format: YYYY-MM-DD
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (date[i] < '0' || date[i] > '9')
			return false;
	}
	return true;
}

void parseFile(std::string data,
			   std::map<std::string, double> dbValues)
{
	std::istringstream iss(data);
	std::string key;
	std::string line;
	double value;

	while (std::getline(iss, line, '\n'))
	{
		if (line.find('|') != std::string::npos)
		{
			std::istringstream iss2(line);
			std::getline(iss2, key, '|');
			std::string valueStr;
			std::getline(iss2, valueStr, '|');
			std::stringstream convert(valueStr);
			convert >> value;
			std::cout << value << std::endl;
			if (convert.fail())
				std::cout << "\033[0;31mError: invalid value\033[0m" << std::endl;
			else if (value < 0)
				std::cout << "\033[0;31mError: not a positive number\033[0m" << std::endl;
			else if (value > 1000)
				std::cout << "\033[0;31mError: too large a number\033[0m" << std::endl;
			else if (validateDate(key))
				std::cout << "\033[0;31mError: invalid date format\033[0m" << std::endl;
			else
				printValue(key, value, dbValues);
		}
		else
			std::cout << "\033[0;31mError: bad input => \033[0m" << line << std::endl;
	}
}

/* {
	std::map<std::string, double> parsedData;
	std::istringstream iss(data);
	std::string key;
	std::string value;

	while (std::getline(iss, key, '\n'))
	{
		std::cout <<  << std::endl;
	}
}
 */
