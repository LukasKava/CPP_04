/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:13 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/02 19:05:06 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

// #include "AMateria.hpp"
#include <iostream>

class	AMateria;

class ICharacter
{
public:
	virtual	~ICharacter() {}
	virtual	std::string const&	getName(void)const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual	void				unequip(int	idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;

	virtual	void		check_the_slot_empty(int idx) = 0;
};

#endif