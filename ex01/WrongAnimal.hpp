/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:51:52 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 15:30:34 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &other);
	virtual	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &other);

	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#define BLANK "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELL "\033[0;33m"
#define CYAN "\033[0;36m"

#endif