/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:07 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 17:41:21 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main( void ) {
ClapTrap a("Artie");
ClapTrap* b = &a;
std::cout << std::endl;

std::cout << a << std::endl;
a.attack("Thot 1");
std::cout << a << std::endl;
a.takeDamage(5);
std::cout << a << std::endl;
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
a.beRepaired(2);
std::cout << *b << std::endl;
a.takeDamage(7);
return 0;
}