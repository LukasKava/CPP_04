/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:39:57 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/06 15:19:44 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	created = 1;
	std::cout << RED << "Materia source " << BLANK << " default constructor!" << std::endl;
	for(int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << RED << "Materia source " << BLANK << " copy constructor!" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "Materia source " << BLANK << "destructor!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] != NULL)
			delete _slot[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << RED << "Materia source " << BLANK << "copy overload" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._slot[i] != NULL)
		{
			if (created == 1)
				delete _slot[i];
			_slot[i] = other._slot[i]->clone();
		}
		else
			_slot[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *newMateria)
{
	std::cout << "Learning materia!" << std::endl;
	int i = 0;

	while (i < 4 && _slot[i] != NULL)
		i++;
	if (i < 4)
		_slot[i] = newMateria;
	else
		std::cout << RED << "Materias slots are full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	std::cout << "Creating Materia!" << std::endl;
	int	i = 0;
	while (i < 4  && _slot[i]->getType().compare(type) !=  0)
		i++;
	if  (i < 4)
		return (_slot[i]->clone());
	return (0);
}

void	MateriaSource::check_the_slot_empty(int idx)
{
	if (_slot[idx] == NULL)
		std::cout << "Slot: " << idx << " is empty!" << std::endl;
	else
		std::cout << "Slot is filled with: " << _slot[idx]->getType() << std::endl;
}
