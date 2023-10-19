/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 10:01:32 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	// std::string zombie1_name = "Andi";
	// std::string zombie2_name = "Artie";
	// create pointer for the class
	{
		/* 	link pointer to newly create class and announce */
		Zombie *one = newZombie("Andi");
		one->announce();
		randomChump("Artie");
		delete one;
	}
	std::cout << std::endl;
	{
		int size = 10;
		Zombie *horde = zombieHorde(size, "Thanos");
		Zombie *horde_tmp = horde;
		for (int i = 0; i < size; i++){
			horde_tmp->announce();
			horde_tmp++;
		}
		delete[] horde;
	}
	system("leaks -q zombie");
	return (0);
}