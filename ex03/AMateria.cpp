/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:32:34 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 11:33:00 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("Default")
{
	std::cout << GREY << "AMateria default constructor has been called!" << BLANK << std::endl;
}

AMateria::AMateria(const AMateria&	other)
{
	std::cout << GREY << "AMateria copy constructor has been called!" << BLANK << std::endl;
	_type = other._type;
}

AMateria::~AMateria(void)
{
	std::cout << GREY << "AMateria default destructor has been called" << BLANK << std::endl;
	
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	std::cout << GREY << "Amateria copy assingment operator overload has been called!" << BLANK << std::endl;
	_type = other._type;
	
	return (*this);
}

//FUNCTIONS ==============================
std::string const&  AMateria::getType(void)const
{
	//std::cout << GREEN << "Get type of AMateria has been called!" << BLANK << std::endl;
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Does not do anything to " << target.getName() << " *" << std::endl;
}