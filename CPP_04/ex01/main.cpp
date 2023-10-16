/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:00:47 by jyim              #+#    #+#             */
/*   Updated: 2023/07/18 12:10:05 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	////Previous main test
	//{
	//	const Animal* meta = new Animal();
	//	std::cout << meta->getType() << " " << std::endl;
	//	std::cout << meta->getType() << " " << std::endl;
	//	meta->makeSound();
	//	delete meta;
	//}
	//std::cout << std::endl;
	//{
	//	const Animal* i = new Cat();
	//	std::cout << i->getType() << " " << std::endl;
	//	i->makeSound(); //will output the cat sound!
	//	delete i;
	//}
	//std::cout << std::endl;
	//{
	//	const Animal* j = new Dog();
	//	std::cout << j->getType() << " " << std::endl;
	//	j->makeSound();
	//	delete j;
	//}
	//std::cout << std::endl;
	//New main test
	//{
	//	const Animal* j = new Dog();
	//	delete j;//should not create a leak
	//	std::cout << std::endl;
	//	const Animal* i = new Cat();
	//	delete i;
	//}
	//	std::cout << std::endl;
	//	//Test to access Brain class ideas
	//{
	//	const Dog* j = new Dog();
	//	std::cout << j->getType() << " " << std::endl;
	//	for (int i = 0; i < 100; i++)
	//		std::cout << j->getBrain()->getIdeas()[i] << " " << std::endl;
	//	delete j;
	//}
		//Test a deep copy of dog
	{
		const Dog* j = new Dog();
		const Dog k(*j);
		//const Dog k = (*j);
		j->getBrain()->getIdeas()[0].append(" Fucking  brilliant idea!");
		std::cout << j->getType() << " " << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << j->getBrain()->getIdeas()[i] << " " << std::endl;
		delete j;
		std::cout << k.getType() << " " << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << k.getBrain()->getIdeas()[i] << " " << std::endl;
	}
	//std::cout << std::endl;
	//{
	//	const Animal* a[100];
	//	for (int i = 0; i < 100; i++){

	//		if (i < 50)
	//			a[i] = new Dog();
	//		else
	//			a[i] = new Cat();
	//	}
	//	for (int i = 0; i < 100; i++){
	//		delete a[i];
	//	}
	//}
return 0;
}