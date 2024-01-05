/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:42:38 by alaparic          #+#    #+#             */
/*   Updated: 2024/01/05 17:08:39 by alaparic         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "BitcoinExchange.hpp"

void validateLine(std::string line, char separation, int lineN)
{
	if (lineN == 1)
		return;
	if (line.find(separation) == std::string::npos)
		throw 5;
	
}

static std::map<std::string, double> readDB()
{
	std::string dbFile = "data.csv";
	std::ifstream dataFile(dbFile);
	if (!dataFile.is_open())
		throw 20;
	std::string line;
	int i = 0;
	while (dataFile)
	{
		char a = dataFile.get();
		line += a;
		if (a == '\n')
		{
			i++;
			validateLine(line, ',', i);
			line = "";
		}
	}
	std::map<std::string, double> test;
	return test;
}

std::string readFile(char *fileName)
{
	std::string fileContent;

	std::ifstream dataFile(fileName);
	if (!dataFile.is_open())
		throw 20;
	while (dataFile)
		fileContent += dataFile.get();
	fileContent = fileContent.substr(0, fileContent.size() - 1); // This removes EOF char at the end

	return fileContent;
}

/* std::map<std::string, double> parseData(std::string fileContent)
{

} */

std::map<std::string, double> getFileData(char *fileName)
{
	std::map<std::string, double> dbValues = readDB();
	std::string fileContent = readFile(fileName);
	// std::map<std::string, double> parsedFileData = parseData(fileContent);
	// return parsedFileData;
	return dbValues;
}
