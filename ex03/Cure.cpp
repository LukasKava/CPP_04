/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:02:23 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 14:43:12 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	_type = "cure";
	std::cout << GREY << "Cure default constructor" << BLANK << std::endl;
}

Cure::Cure(const Cure& other): AMateria()
{
	_type = other._type;
	std::cout << GREY << "Cure copy constructor" << BLANK << std::endl;
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure destructor" << GREY << " has been called!" << BLANK << std::endl;
}

Cure&	Cure::operator=(const Cure &other)
{
	std::cout << GREY << "Cure assignment operator overload!" << BLANK << std::endl;
	_type = other._type;
	return (*this);
}

//Function =======================================
AMateria *Cure::clone(void) const
{
	std::cout << GREEN << "Cure clone" << GREY << " created!" << BLANK << std::endl;
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}