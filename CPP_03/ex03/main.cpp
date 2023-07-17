/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:07 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 18:43:08 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int main( void ) {
DiamondTrap a;
a.whoAmI();
std::cout << std::endl;
DiamondTrap b("Jack");
b.whoAmI();
return 0;
}