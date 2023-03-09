/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:32:55 by lkavalia          #+#    #+#             */
/*   Updated: 2023/03/09 16:41:17 by lkavalia         ###   ########.fr       */
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
	}

	{
		std::cout << RED << "\n============ TEST DEEP COPIES ============\n" << BLANK << std::endl;

		std::cout << GREEN <<"TEST1	----->" << BLANK << std::endl;

		AMateria	*x_1 = new Ice();
		std::cout << std::endl;
		AMateria	*x_2 = x_1;

		std::cout << x_2->getType() << std::endl;

		std::cout << GREEN << "TEST2	----->" << BLANK << std::endl;
		Ice		x_3;
		Ice		x_4(x_3);

		std::cout << GREEN << "TEST3	----->" << BLANK << std::endl;
		Cure	x_5;
		Cure	x_6(x_5);
		std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;
		delete x_1;
	}

	{
		std::cout << GREEN << "TEST4	----->"  << BLANK << std::endl;
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

		std::cout << GREEN << "\nTEST5	----->" << BLANK << std::endl;
		x_8->unequip(5);
		x_8->unequip(1);

		for (int i = 0; i < 4; i++)
		{
			std::cout << "Slot [" << i << "]: ";
			x_8->check_the_slot_empty(i);
		}

		std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;

		delete x_8;
	}

	{
		std::cout << GREEN << "\nTEST6	----->" << BLANK << std::endl;
		Character	x_9("Bla");

		x_9.equip(new Ice());
		x_9.equip(new Cure());
		x_9.equip(new Ice());
		Character	x_10 = x_9;
		std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;
	}

	{
		std::cout << GREEN << "\nTEST7	----->" << BLANK << std::endl;
		Character x_11("TRA");

		x_11.equip(new Ice());
		x_11.equip(new Cure());
		x_11.equip(new Ice());
		
		Character	x_12("HEY");
		x_12.equip(new Cure());
		x_12.equip(new Ice());
		x_12.equip(new Cure());
		x_12 = x_11;

		std::cout << YELL << "\nCHECKING THE CHARACTER:" << BLANK << std::endl;
		std::cout << "NAME: " << x_12.getName() << std::endl;
		for (int i = 0; i < 4; i++)
			x_12.check_the_slot_empty(i);
		std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;
	}

	{
		std::cout << GREEN << "\nTEST8	----->" << BLANK << std::endl;
		MateriaSource	first;

		first.learnMateria(new Ice());
		first.learnMateria(new Cure());
		first.learnMateria(new Ice());

		MateriaSource	second = first;
		std::cout << YELL << "\nCHECKING THE MATERIA SOURCE:" << BLANK << std::endl;
		for (int i = 0; i < 4; i++)
			second.check_the_slot_empty(i);
		std::cout << RED << "\n============ DESTRUCTORS ============\n" << BLANK << std::endl;
	}

	{
		std::cout << GREEN << "\nTEST9	----->" << BLANK << std::endl;
		MateriaSource	first_x1;

		first_x1.learnMateria(new Ice());
		first_x1.learnMateria(new Cure());
		first_x1.learnMateria(new Ice());

		MateriaSource	second_x1;
		second_x1.learnMateria(new Ice());
		second_x1.learnMateria(new Cure());
		second_x1.learnMateria(new Ice());

		second_x1 = first_x1;

		std::cout << YELL << "\nCHECKING THE MATERIA SOURCE:" << BLANK << std::endl;
		for (int i = 0; i < 4; i++)
			second_x1.check_the_slot_empty(i);
		std::cout << RED << "\nDESTRUCTOR CORNER ========================" << BLANK << std::endl;
	}
	
	return 0;
}

// int main()
// {
// 	{
// 		std::cout << "\x1B[34m" << "\n##### TEST FROM SUBJECT #####\n" << "\x1B[0m" << std::endl;

// 		IMateriaSource *src = new MateriaSource();

// 		src->learnMateria(new Ice());
// 		src->learnMateria(new Cure());

// 		ICharacter *me = new Character("me");
// 		AMateria *tmp;

// 		tmp = src->createMateria("ice");
// 		me->equip(tmp);
// 		tmp = src->createMateria("cure");
// 		me->equip(tmp);

// 		ICharacter *bob = new Character("bob");

// 		std::cout << std::endl;
// 		me->use(0, *bob);
// 		me->use(1, *bob);
// 		std::cout << std::endl;

// 		delete bob;
// 		delete me;
// 		delete src;
// 	}
// 	{
// 		std::cout << "\x1B[34m" << "\n\n\n\n\n##### MY TEST #####\n" << "\x1B[0m" << std::endl;
// 		IMateriaSource *src = new MateriaSource();

// 		std::cout << YELL << "\n### LEARN 5 Materias (one too much) ###" << BLANK << std::endl;
// 		for (int i = 0; i < 5; i++)
// 			src->learnMateria(new Ice());

// 		std::cout << "\n### CREATE new Character ###" << std::endl;
// 		ICharacter *me = new Character("me");
// 		std::cout << YELL << "\n### EQUIP 5 Materias (one too much) ###" << BLANK << std::endl;

// 		AMateria *tmp;
// 		for (int i = 0; i < 5; i++)
// 		{
// 			tmp = src->createMateria("ice");
// 			me->equip(tmp);
// 		}
// 		delete tmp;

// 		me->unequip(0);
// 		me->unequip(1);
// 		me->unequip(2);
// 		me->unequip(3);
// 		me->unequip(4);

// 		std::cout << "\n### CREATE new Character ###" << std::endl;
// 		ICharacter *bob = new Character("bob");
// 		std::cout << GREEN << "\n### USE 5 Materias (one too much) ###" << BLANK << std::endl;

// 		me->use(0, *bob);
// 		me->use(1, *bob);
// 		me->use(2, *bob);
// 		me->use(3, *bob);
// 		me->use(4, *bob);



// 		std::cout << "\n### Starting destruction... ###" << std::endl;
// 		delete src;
// 		delete me;
// 		delete bob;
// 		return 0;
// 	}
// }
