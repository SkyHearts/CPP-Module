/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:07 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:40:54 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main( void ) {
{
	DiamondTrap a;
	a.whoAmI();
	std::cout << a << std::endl;
}
std::cout << std::endl;
{
	DiamondTrap b("Jack");
	b.whoAmI();
	b.attack("Random person");
	b.highFivesGuys();
	b.guardGate();
	b.guardGate();
}
return 0;
}