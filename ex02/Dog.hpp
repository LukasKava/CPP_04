/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:08:01 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:18:33 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public AAnimal
{
private:
	Brain	*_brain;
public:
	Dog(void);
	Dog(const Dog& other);
	~Dog(void);

	Dog&	operator=(const	Dog& other);

	void	makeSound(void)const;
};

#endif