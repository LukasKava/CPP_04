/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:54 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 14:17:30 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
public:
	Cat(void);
	Cat(const Cat& other);
	~Cat(void);

	Cat&	operator=(const Cat& other);
	void	makeSound(void)const;
};

#endif