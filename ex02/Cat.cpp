/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:51 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:18:59 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type =  "Cat";
	_brain = new Brain();
	std::cout << YELL << "Default Cat " << BLANK << "constructor has been called!\n";
};

Cat::Cat(const Cat& other): AAnimal()
{
	std::cout << YELL << "Copy Cat " << BLANK << "constructor has been called!\n";
	_type = other._type;
	_brain = new Brain(*other._brain);
	std::cout << "Mem loc1: " << _brain << " Mem loc2: " << other._brain << std::endl;
}

Cat::~Cat(void)
{
	delete	_brain;
	std::cout << RED << "Cat dies!\n";
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << YELL << "Copy Cat " << BLANK << "assigment operator overload!\n";
	_type = other._type;
	delete _brain;
	other._brain->set_idea("Superb idea!", 10);
	_brain = new Brain(*other._brain);
	std::cout << "Checking idea: " << _brain->get_idea(10) << std::endl;
	std::cout << "Mem loc1: " << _brain  <<  "Mem loc2: " << other._brain << std::endl; 
	return (*this);
}

void	Cat::makeSound(void)const
{
	std::cout << CYAN << _type << " makes a sound!" << BLANK << std::endl;
}
