/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:40:17 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/06 15:19:07 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include	"IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_slot[4];
public:
	int			created;
	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	~MateriaSource(void);

	MateriaSource&	operator=(const MateriaSource& other);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const &);

	void		check_the_slot_empty(int idx);
};

#endif