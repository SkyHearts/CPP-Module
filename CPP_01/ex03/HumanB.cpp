/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:21:59 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:31:24 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	_name = "John Doe";
}

HumanB::HumanB(std::string name){
	_name = name;
}

void	HumanB::setWeapon(Weapon& weap){
	_weap = &weap;
}

void	HumanB::attack(void){
	std::cout << _name << " attacks with their " << (*_weap).getType() << std::endl;
}