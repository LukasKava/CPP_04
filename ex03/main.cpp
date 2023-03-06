/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:32:55 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/06 15:21:29 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "--1--" << std::endl;
	ICharacter *me = new Character("me");
	std::cout << "--2--" << std::endl;
	AMateria *tmp;
	std::cout << "--3--" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << "--4--" << std::endl;
	me->equip(tmp);
	me->check_the_slot_empty(0);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	//Custom  tests =====================================
	std::cout << RED << "\n============ Custom tests ============\n" << BLANK << std::endl;
	AMateria	*a_2 = new Ice();
	AMateria	*a_3 = new Cure();
	AMateria	*a_4 = new Ice();
	Ice			*a_5 = new Ice();

	me->equip(a_2);
	me->equip(a_3);
	//Should not work as its the slot 4 and 5
	me->equip(a_4);
	me->equip(a_5);

	Character *pika = new Character("pika");

	ICharacter *bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *pika);
	//Should not work ==============
	me->use(4, *pika);
	std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;

	delete a_4;
	delete a_5;
	delete bob;
	delete pika;
	delete me;
	delete src;

	std::cout << RED << "\n============ TEST DEEP COPIES ============\n" << BLANK << std::endl;

	std::cout << "TEST1	----->" << std::endl;

	AMateria	*x_1 = new Ice();
	std::cout << std::endl;
	AMateria	*x_2 = x_1;

	std::cout << x_2->getType() << std::endl;

	std::cout << "TEST2	----->" << std::endl;
	Ice		x_3;
	Ice		x_4(x_3);

	std::cout << "TEST3	----->" << std::endl;
	Cure	x_5;
	Cure	x_6(x_5);

	std::cout << "TEST4	----->" << std::endl;
	ICharacter	*x_7 = new Character("Hallo");
	x_7->equip(new Ice());
	x_7->equip(new Cure());
	x_7->equip(new Ice());
	x_7->equip(new Cure());

	ICharacter	*x_8 = x_7;
	std::cout << x_8->getName() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Slot [" << i << "]: "; 
		x_8->check_the_slot_empty(i);
	}

	std::cout << "TEST5	----->" << std::endl;
	x_8->unequip(5);
	x_8->unequip(1);

	std::cout << "TEST6	----->" << std::endl;
	Character	x_9("Bla");
	x_9.equip(new Ice());
	x_9.equip(new Cure());
	x_9.equip(new Ice());
	//x_9.equip(new Ice());
	Character	x_10 = x_9;

	std::cout << "TEST7	----->" << std::endl;
	Character x_11("TRA");
	x_11.equip(new Ice());
	x_11.equip(new Cure());
	x_11.equip(new Ice());
	// x_9.equip(new Ice());
	
	Character	x_12("HEY");
	x_12.equip(new Cure());
	x_12.equip(new Ice());
	x_12.equip(new Cure());
	x_12 = x_11;

	std::cout << "CHECKING THE CHARACTER:" << std::endl;
	std::cout << "NAME: " << x_12.getName() << std::endl;
	for (int i = 0; i < 4; i++)
		x_12.check_the_slot_empty(i);
	std::cout << "\nTEST8	----->" << std::endl;
	MateriaSource	first;

	first.learnMateria(new Ice());
	first.learnMateria(new Cure());
	first.learnMateria(new Ice());

	MateriaSource	second = first;

	std::cout << "CHECKING THE MATERIA SOURCE:" << std::endl;
	for (int i = 0; i < 4; i++)
		x_12.check_the_slot_empty(i);

	std::cout << "\nTEST9	----->" << std::endl;
	MateriaSource	first_x1;

	first_x1.learnMateria(new Ice());
	first_x1.learnMateria(new Cure());
	first_x1.learnMateria(new Ice());

	MateriaSource	second_x1;
	second_x1.learnMateria(new Ice());
	second_x1.learnMateria(new Cure());
	second_x1.learnMateria(new Ice());

	second_x1 = first_x1;

	std::cout << "CHECKING THE MATERIA SOURCE:" << std::endl;
	for (int i = 0; i < 4; i++)
		second_x1.check_the_slot_empty(i);


	std::cout << "\nDESTRUCTOR CORNER ========================" << std::endl;
	std::cout << std::endl;
	delete x_1;
	delete x_8;
	std::cout << std::endl;
	return 0;
}