/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:14:06 by jyim              #+#    #+#             */
/*   Updated: 2023/07/03 11:29:34 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	// std::string zombie1_name = "Andi";
	// std::string zombie2_name = "Artie";
	// create pointer for the class
/* 	link pointer to newly create class and announce */
	Zombie *one = newZombie("Andi");
	one->announce();
	randomChump("Artie");
	delete one;
	// system("leaks -q a.out");
	return (0);
}