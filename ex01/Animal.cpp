/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:42 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 14:41:49 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors ==================================
Animal::Animal(void): _type("Default animal")
{
	std::cout << RED << "Default Animal" << BLANK << " constructor has been called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor has been called!" << std::endl;
	_type = other._type;
}

Animal::~Animal(void)
{
	std::cout << RED << "Default Animal" << BLANK <<  " destructor has been called" << std::endl;
}

//Copy assignment operator	======================
Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assigment operator overload!" << std::endl;
	this->_type = other._type;
	return (*this);
}

std::string	Animal::getType(void)const
{
	return (_type);
}

// Functions	==================================
void	Animal::makeSound(void)const
{
	std::cout << GREEN << _type << " makes a sound!" << std::endl;
}
