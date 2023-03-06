/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:11:38 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/02 16:35:17 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	Ice(const Ice &other);
	~Ice(void);

	Ice &operator=(const Ice &other);

	AMateria	*clone() const;
	void		use(ICharacter &target);
};

#endif