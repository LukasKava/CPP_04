/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:57:10 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 10:30:18 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include	<iostream>
#include	<algorithm>
#include	<stdio.h>
#include	<stdio.h>

class	Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(void);
	Brain(const	Brain&	other);
	~Brain(void);

	Brain&	operator=(const Brain& other);

	std::string get_idea(unsigned int i);

	void set_idea(const std::string &idea, unsigned int i);
	void set_base_ideas(const std::string &ideas);
};

# define BLANK "\033[0m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define CYAN "\033[0;36m"

#endif