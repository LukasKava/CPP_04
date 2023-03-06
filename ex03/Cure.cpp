/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:02:23 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/02 15:17:27 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	_type = "cure";
	std::cout << CYAN << "Cure default" << BLANK << " constructor" << std::endl;
}

Cure::Cure(const Cure& other): AMateria()
{
	_type = other._type;
	std::cout << CYAN << "Cure copy" << BLANK << " constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure destructor" << BLANK << " has been called!" << std::endl;
}

Cure&	Cure::operator=(const Cure &other)
{
	std::cout << CYAN << "Cure assignment" << BLANK << " operator overload!" << std::endl;
	_type = other._type;
	return (*this);
}

//Function =======================================
AMateria *Cure::clone(void) const
{
	std::cout << YELL << "Cure clone" << BLANK << " created!" << std::endl;
	AMateria *clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}