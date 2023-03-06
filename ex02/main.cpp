/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:08:04 by lkavalia          #+#    #+#             */
/*   Updated: 2023/02/28 15:19:21 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Deep copies of dog and cat
	std::cout << CYAN << "Checking the deep copies	-----------------" << BLANK << std::endl;

	Cat	*x = new Cat();
	std::cout << std::endl;
	Cat	*y = new Cat(*x);
	delete x;
	delete y;
	std::cout << std::endl;
	Dog *x_a = new Dog();
	std::cout << std::endl;
	Dog *y_a = new Dog(*x_a);
	delete x_a;
	delete y_a;

	//Deep copies of dog and cat with assignment overload operator
	std::cout << std::endl;
	std::cout << CYAN << "Checking deep copies of assigment overload	-----------------" << BLANK << std::endl;

	Cat x1;
	Cat	y1;
	std::cout << std::endl;
	x1 = y1;
	std::cout << std::endl;
	Dog x_d;
	Dog	y_d;
	std::cout << std::endl;
	x_d = y_d;
	std::cout << std::endl;

	//Tests that are provided in the subject pdf
	std::cout << CYAN << "Checking subject pdf	-----------------" << BLANK << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl;
	// std::cout << CYAN << "Tests from the description of the pdf	-----------------" << BLANK << std::endl;

	// Animal	arr[10];
	// for (int p = 0; p < 5; p++)
	// {
	// 	arr[p] = Dog();
	// 	arr[p + 5] = Cat();
	// }
	// std::cout << std::endl;
	// std::cout << arr[5].getType() << " ";
	// arr[5].makeSound();
	// std::cout << arr[2].getType() << " ";
	// arr[2].makeSound();

	// std::cout << std::endl;
	std::cout << CYAN << "Tests dynamical alloc of the arr	-----------------" << BLANK << std::endl;

	AAnimal	*animal_array[10];
	for (unsigned int i = 0; i < 5; i++)
	{
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}

	std::cout << std::endl;
	std::cout << animal_array[5]->getType() << " ";
	animal_array[5]->makeSound();
	std::cout << animal_array[2]->getType() << " ";
	animal_array[2]->makeSound();
	
	std::cout << std::endl;
	for (unsigned int i = 0; i < 10; i++)
		delete	animal_array[i];
	std::cout << std::endl;
	return 0;
}