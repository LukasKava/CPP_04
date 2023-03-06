/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:42 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:19:45 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors ==================================
AAnimal::AAnimal(void): _type("Default animal")
{
	std::cout << RED << "Default Animal" << BLANK << " constructor has been called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "Animal copy constructor has been called!" << std::endl;
	_type = other._type;
}

AAnimal::~AAnimal(void)
{
	std::cout << RED << "Default Animal" << BLANK <<  " destructor has been called" << std::endl;
}

//Copy assignment operator	======================
AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	std::cout << "Animal copy assigment operator overload!" << std::endl;
	this->_type = other._type;
	return (*this);
}

std::string	AAnimal::getType(void)const
{
	return (_type);
}

// Functions	==================================
void	AAnimal::makeSound(void)const
{
	std::cout << GREEN << _type << " makes a sound!" << BLANK << std::endl;
}
