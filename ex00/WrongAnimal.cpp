/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:51:46 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:09:35 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include "Animal.hpp"

// Constructors ==================================
WrongAnimal::WrongAnimal(void) : _type("Default Wrong animal")
{
	std::cout << RED << "Default WrongAnimal" << BLANK << " constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Wrong Animal copy constructor has been called!" << std::endl;
	_type = other._type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "Default Wrong Animal" << BLANK << " destructor has been called" << std::endl;
}

// Copy assignment operator	======================
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << " Wrong Animal copy assigment operator overload!" << std::endl;
	this->_type = other._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

// Functions	==================================
void WrongAnimal::makeSound(void) const
{
	std::cout << GREEN << _type << " makes a sound!" << std::endl;
}
