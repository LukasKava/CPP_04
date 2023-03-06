/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:02:26 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/01 20:20:01 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	Cure(const Cure& other);
	~Cure(void);

	Cure&	operator=(const Cure& other);

	AMateria*	clone()const;
	void		use(ICharacter& target);
};

#endif