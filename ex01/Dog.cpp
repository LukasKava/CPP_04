/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:56 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 13:21:29 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << YELL << "Default Dog " << BLANK << "constructor has been called!\n";
}

Dog::Dog(const Dog& other): Animal()
{
	std::cout << YELL << "Copy Dog " << BLANK << "constructor has been called!\n";
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "Mem loc1: " << _brain << " Mem loc2: " << other._brain << std::endl;
}

Dog::~Dog(void)
{
	delete	_brain;
	std::cout << RED << "Dog dies!\n";
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << YELL << "Copy Dog " << BLANK << "assigment operator overload!\n";
	_type = other._type;
	delete _brain;
	other._brain->set_idea(" Dog Superb idea!", 10);
	_brain = new Brain(*other._brain);
	std::cout << "Checking idea: " << _brain->get_idea(10) << std::endl;
	std::cout << "Mem loc1: " << _brain << "Mem loc2: " << other._brain << std::endl;
	std::cout << YELL << "Copy Dog " << BLANK << "assigment operator overload!\n";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << CYAN << _type << " makes a sound!" << std::endl;
}