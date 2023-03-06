/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:07:48 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:30:43 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

#include	<iostream>

class	Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(const Animal& other);
	virtual	~Animal(void);
	
	Animal&	operator=(const Animal&	other);

	std::string		getType(void)const;
	virtual void	makeSound(void)const;
};

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define CYAN "\033[0;36m"

#endif