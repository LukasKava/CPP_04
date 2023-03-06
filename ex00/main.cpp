/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:08:04 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/27 16:46:27 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	a1;
	Animal	a2;
	Animal	a3(a2);

	a1 = a2;
	a1.makeSound();
	a2.makeSound();
	a3.makeSound();

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << RED << "\nBasic tests ------------------\n" << BLANK << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete	meta;
	delete	j;
	delete	i;

	std::cout << RED << "\nWrong tests ------------------\n" << BLANK << std::endl;
	const WrongAnimal *w_meta = new WrongAnimal();
	const WrongAnimal *w_i = new WrongCat();
	std::cout << w_meta->getType() << " " << std::endl;
	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound();
	w_meta->makeSound();

	delete	w_meta;
	delete	w_i;
	return 0;
}