/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:47 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 16:11:40 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Ice.hpp"
// #include "Cure.hpp"
// #include "Character.hpp"
// #include "ICharacter.hpp"
// #include "MateriaSource.hpp"

#include "Header.hpp"

void run()
{
	{	
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << std::endl;
		ICharacter* me = new Character("me");
		std::cout << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(4, *bob);
		std::cout << std::endl;
		delete bob;
		std::cout << std::endl;
		delete me;
		std::cout << std::endl;
		delete src;
	}
	std::cout << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		std::cout << std::endl;
		src->learnMateria(new Cure());
		std::cout << std::endl;
		src->learnMateria(new Ice());
		std::cout << std::endl;
		src->learnMateria(new Cure());
		std::cout << std::endl;
		src->learnMateria(new Ice());
		std::cout << std::endl;
		src->learnMateria(new Cure());
		std::cout << std::endl;
		delete src;
	}
	std::cout << std::endl;
	{	
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << std::endl;
		ICharacter* me = new Character("me");
		std::cout << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;
		me->unequip(0);
		me->unequip(3);
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;
		delete bob;
		std::cout << std::endl;
		delete me;
		std::cout << std::endl;
		delete src;
	}
	std::cout << std::endl;
	{	
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << std::endl;
		Character me("me");
		std::cout << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me.equip(tmp);
		tmp = src->createMateria("cure");
		me.equip(tmp);
		std::cout << std::endl;
		Character not_me = me;
		std::cout << std::endl;
		ICharacter* bob = new Character("bob");
		std::cout << std::endl;
		me.use(0, *bob);
		me.use(1, *bob);
		std::cout << std::endl;
		me.unequip(0);
		me.unequip(3);
		me.use(0, *bob);
		me.use(1, *bob);
		std::cout << std::endl;
		not_me.use(0, *bob);
		not_me.use(1, *bob);
		std::cout << std::endl;
		delete bob;
		std::cout << std::endl;
		delete src;
	}
}

int main()
{
	run();
	system("leaks main");
}