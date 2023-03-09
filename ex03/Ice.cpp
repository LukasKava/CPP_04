/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:13:38 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 14:42:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
	std::cout << GREY << "Ice default constructor" << BLANK << std::endl;
}

Ice::Ice(const Ice& other): AMateria()
{
	_type = other._type;
	std::cout << GREY << "Ice copy constructor" << BLANK << std::endl;
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice destructor" << GREY << " has been called!" << BLANK << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << GREY << "Ice assignment operator overload!" << BLANK << std::endl;
	_type = other._type; 
	return (*this);
}


//Functions =============================================
AMateria*	Ice::clone(void)const
{
	std::cout << GREEN << "Ice clone" << GREY << " created!" << BLANK << std::endl;
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}