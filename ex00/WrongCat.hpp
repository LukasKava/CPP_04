/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:52:00 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:05:46 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &other);
	~WrongCat(void);

	WrongCat &operator=(const WrongCat &other);
	void makeSound(void) const;
};

#endif