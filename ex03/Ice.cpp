/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:13:38 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/02 15:17:52 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
	std::cout << YELL << "Ice default" << BLANK << " constructor" << std::endl;
}

Ice::Ice(const Ice& other): AMateria()
{
	_type = other._type;
	std::cout << YELL << "Ice copy" << BLANK << " constructor" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice destructor" << BLANK << " has been called!" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << YELL << "Ice assignment" << BLANK << " operator overload!" << std::endl;
	_type = other._type; 
	return (*this);
}


//Functions =============================================
AMateria*	Ice::clone(void)const
{
	std::cout << YELL << "Ice clone" << BLANK << " created!" << std::endl;
	AMateria *clone = new Ice();
	return	(clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}