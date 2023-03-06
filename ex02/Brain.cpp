/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:08:40 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 11:48:42 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <stdio.h>
#include <string.h>
#include <cstring>

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "No Idea!";
	std::cout << CYAN << "Default Brain ==> " << BLANK << "constructor has been called!" << std::endl;
}

Brain::Brain(const	Brain& other)
{
	std::copy(other._ideas, other._ideas + 100, this->_ideas);
	std::cout << CYAN << "Default Brain ==>" << BLANK << " copy constructor has been called!" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::copy(other._ideas, other._ideas + 100, this->_ideas);
	std::cout << CYAN << "Brain ==>" << BLANK << " assignment operator overload!" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << RED << "Default Brain destructor has been called!" << std::endl;
}

void	Brain::set_idea(const std::string &idea, unsigned int i)
{
	if (i < 100)
	{
		_ideas[i] = idea;
		std::cout << "Cheking memloc1: " << &_ideas[i] << "checking  memloc2: " << &idea << std::endl;
		std::cout << "Checking the set_idea: " << _ideas[i] << std::endl;
	}
}

void	Brain::set_base_ideas(const	std::string	&ideas)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas;
	std::cout << "Checking set_base ideas: " << ideas[50] << std::endl; 
}

std::string	Brain::get_idea(unsigned int i)
{
	if (i < 100)
		return (_ideas[i]);
	std::cout << "Inputed index is incorrect returning the first idea!" << std::endl;
	return (_ideas[0]);
}