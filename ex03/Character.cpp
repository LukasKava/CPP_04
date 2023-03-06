/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:47:19 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/06 15:11:37 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << CYAN << "Character default" << BLANK << " constructor!" << std::endl;
	_name = "Default";
	check = 1;
	for(int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::Character(const std::string& name): ICharacter()
{
	_name = name;
	check = 1;
	std::cout << RED << "Character constructor" << BLANK
	<< " with  the name is called!" << std::endl;
	for(int i = 0;  i < 4; i++)
		_slot[i] = NULL;
}

Character::~Character(void)
{
	std::cout << RED << "Destroying Character: " << _name << "...."<< BLANK << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] != NULL)
		{
			std::cout << "Triggered!" << std::endl;
			delete _slot[i];
		}
	}
}

Character::Character(const Character& other)
{
	*this = other;
	std::cout << RED << "Character copy" << BLANK << " constructor" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	std::cout << RED << "Character copy lool" << BLANK << " assignment operator overload!" << std::endl;
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
		std::cout << RED << "Materias slots are full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "Index is incorrect there are only 4 slots ranging from 0 - 3!" << BLANK << std::endl;
	else
	{
		delete	_slot[idx];
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
	if (_slot[idx] == NULL)
		std::cout << "Slot: " << idx << " is empty!" << std::endl;
	else
		std::cout << "Slot is filled with: " << _slot[idx]->getType() << std::endl;
}
