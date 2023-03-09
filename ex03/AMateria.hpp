/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:32:37 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 11:32:06 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(void);
	AMateria(const AMateria& other);
	virtual	~AMateria(void);

	AMateria&	operator=(const AMateria& other);
	
	AMateria(std::string const &type);
	std::string const&	getType(void) const; // Returns the materia type

	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#define BLANK "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELL "\033[0;33m"
#define CYAN "\033[0;36m"
#define	GREY "\x1b[90m"

#endif