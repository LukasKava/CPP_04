/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:35:31 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/02 20:56:17 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "iostream"

class IMateriaSource
{
public:
	virtual	~IMateriaSource() {};
	virtual	void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const& type) = 0;
};

#endif