/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:47:19 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 16:24:44 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << GREY << "Character default constructor!" << BLANK << std::endl;
	_name = "Default";
	check = 1;
	for(int i = 0; i < 4; i++)
		_slot[i] = NULL;
	for (int i = 0; i < 4; i++)
		_lost[i] = NULL;
}

Character::Character(const std::string& name): ICharacter()
{
	_name = name;
	check = 1;
	std::cout << GREY << "Character constructor with  the name is called!" << BLANK << std::endl;
	for(int i = 0;  i < 4; i++)
		_slot[i] = NULL;
	for (int i = 0; i < 4; i++)
		_lost[i] = NULL;
}

Character::~Character(void)
{
	std::cout << GREY << "Destroying Character: " << _name << "...."<< BLANK << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] != NULL)
		{
			delete _slot[i];
			_slot[i] = NULL;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (_lost[i] != NULL)
		{
			delete _lost[i];
			_lost[i] = NULL;
		}
	}
}

Character::Character(const Character& other)
{
	std::cout << GREY << "Character copy constructor" << BLANK << std::endl;
	*this = other;
}

Character&	Character::operator=(const Character& other)
{
	std::cout << GREY << "Character copy assignment operator overload!" << BLANK << std::endl;
	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._slot[i] != NULL)
		{
			if (check == 1)
				delete	_slot[i];
			_slot[i] = other._slot[i]->clone();
		}
		else
			_slot[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (other._lost[i] != NULL)
		{
			if (check == 1)
				delete _lost[i];
			_lost[i] = other._lost[i]->clone();
		}
		else
			_lost[i] = NULL;
	}
	return (*this);
}

//Functions =========================================
std::string	const	&Character::getName(void)const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (i < 4 && _slot[i] != NULL)
		i++;
	if (i < 4)
		_slot[i] = m;
	else
		std::cout << GREY << "Materias slots are full!" << BLANK << std::endl;
}

void	Character::unequip(int idx)
{
	int	i = 0;
	std::cout << RED << "Unequiping the slot!" << BLANK << idx << std::endl;
	if (idx < 0 || idx > 3)
		std::cout << RED << "Index is incorrect there are only 4 slots ranging from 0 - 3!" << BLANK << std::endl;
	else
	{
		if (_slot[idx] != NULL)
		{
			while (i < 4 && _lost[i] != NULL)
				i++;
			if (i > 3)
			{
				delete _lost[0];
				i = 0;
			}
			_lost[i] = _slot[idx];
		}
		_slot[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << RED << "There are only 4 slots ranging from: 0 - 3" << BLANK << std::endl;
		return;
	}
 	if (_slot[idx] != NULL)
		_slot[idx]->use(target);
	else
		std::cout << RED << "Your chosen slot is empty!" << BLANK << std::endl;
}

void	Character::check_the_slot_empty(int idx)
{
	if (idx > 3)
	{
		std::cout << "Index incorrect!" << std::endl;
		return;
	}
	if (_slot[idx] == NULL)
		std::cout << "Slot: " << idx << " is empty!" << std::endl;
	else
		std::cout << "Slot is filled with: " << _slot[idx]->getType() << std::endl;
}
