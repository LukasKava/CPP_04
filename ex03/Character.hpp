/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:26:35 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/06 15:09:59 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character: public ICharacter
{
private:
	Character(void);
	AMateria	*_slot[4];
	std::string	_name;
public:
	int			check;
	Character(const std::string& name);
	Character(const	Character& other);
	~Character(void);

	Character&	operator=(const Character& other);

	std::string const&	getName(void) const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	//My Function
	void	check_the_slot_empty(int idx);
};

#endif