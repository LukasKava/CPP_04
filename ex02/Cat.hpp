/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:54 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:18:38 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public AAnimal
{
private:
	Brain	*_brain;
public:
	Cat(void);
	Cat(const Cat& other);
	~Cat(void);

	Cat&	operator=(const Cat& other);
	void	makeSound(void)const;
};

#endif