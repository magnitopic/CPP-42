/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:58:16 by alaparic          #+#    #+#             */
/*   Updated: 2023/12/20 15:16:58 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			this->learnedMaterias[i] = copy.learnedMaterias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 4; i++)
			this->learnedMaterias[i] = assign.learnedMaterias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMaterias[i])
			delete this->learnedMaterias[i];
	}
}

/* Methods form interface */

void MateriaSource::learnMateria(AMateria *lesson)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMaterias[i] == NULL && lesson)
		{
			this->learnedMaterias[i] = lesson->clone();
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *knowledge = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (this->learnedMaterias[i] &&
			this->learnedMaterias[i]->getType() == type)
		{
			knowledge = this->learnedMaterias[i]->clone();
			break;
		}
	}
	if (knowledge)
		return knowledge;
	return 0;
}
