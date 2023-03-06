/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:48 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:17:57 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

#include	<iostream>

class	AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal(void);
	AAnimal(const AAnimal& other);
	virtual	~AAnimal(void);
	
	AAnimal&	operator=(const AAnimal&	other);

	std::string		getType(void)const;
	virtual void	makeSound(void)const = 0;
};

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define CYAN "\033[0;36m"

#endif