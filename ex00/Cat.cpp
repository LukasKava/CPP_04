/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:51 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:11:06 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type =  "Cat";
	std::cout << YELL << "Default Cat " << BLANK << "constructor has been called!\n";
};

Cat::Cat(const Cat& other): Animal()
{
	_type = other._type;
	std::cout << YELL << "Copy Cat " << BLANK << "constructor has been called!\n";
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat dies!\n";
}

Cat&	Cat::operator=(const Cat& other)
{
	_type = other._type;
	std::cout << YELL << "Copy Cat " << BLANK << "assigment operator overload!\n";
	return (*this);
}

void	Cat::makeSound(void)const
{
	std::cout << CYAN << _type << " makes a sound!" << std::endl;
}
