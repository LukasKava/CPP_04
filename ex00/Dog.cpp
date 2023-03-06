/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:56 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:37:18 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << YELL << "Default Dog " << BLANK << "constructor has been called!\n";
}

Dog::Dog(const Dog& other): Animal()
{
	_type = other._type;
	std::cout << YELL << "Copy Dog " << BLANK << "constructor has been called!\n";
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog dies!\n";
}

Dog&	Dog::operator=(const Dog& other)
{
	_type = other._type;
	std::cout << YELL << "Copy Dog " << BLANK << "assigment operator overload!\n";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << CYAN << _type << " makes a sound!" << std::endl;
}