/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:07 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 18:03:28 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main( void ) {
ScavTrap a("Artie");
ClapTrap *b = &a;
std::cout << std::endl;

std::cout << a << std::endl;
std::cout << *b << std::endl;
std::cout << std::endl;

a.ClapTrap::attack("Thot 1");
b->attack("Thot 1");
std::cout << *b << std::endl;

std::cout << std::endl;
a.ScavTrap::attack("Thot 1");
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
a.guardGate();
a.guardGate();
std::cout << a;
std::cout << std::endl;
a.takeDamage(70);
return 0;
}