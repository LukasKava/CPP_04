/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:51:56 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:13:16 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << YELL << "Default Wrong Cat " << BLANK << "constructor has been called!\n";
};

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	_type = other._type;
	std::cout << YELL << "Copy Wrong Cat " << BLANK << "constructor has been called!\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << RED << "Wrong Cat dies!\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	std::cout << YELL << "Copy Wrong Cat " << BLANK << "assigment operator overload!\n";
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << CYAN << _type << " makes a sound!" << std::endl;
}
