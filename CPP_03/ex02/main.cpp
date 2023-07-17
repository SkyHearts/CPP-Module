/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:07 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 17:56:19 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main( void ) {
FragTrap a("Jack");
ClapTrap *b = &a;
std::cout << std::endl;

std::cout << a << std::endl;
std::cout << *b << std::endl;
std::cout << std::endl;

a.ClapTrap::attack("Thot 1");
b->attack("Thot 1");
std::cout << *b << std::endl;

std::cout << std::endl;
a.FragTrap::attack("Thot 1");
a.attack("Thot 1");
std::cout << a << std::endl;
std::cout << std::endl;

a.ClapTrap::takeDamage(50);
b->takeDamage(20);
a.takeDamage(10);
std::cout << *b << std::endl;
std::cout << std::endl;


a.beRepaired(10);
b->beRepaired(40);
std::cout << a << std::endl;
std::cout << std::endl;
a.highFivesGuys();
a.takeDamage(70);
a.highFivesGuys();
std::cout << std::endl;

//FragTrap* a = new FragTrap();
//ClapTrap* b = a;
//delete b;
return 0;
}