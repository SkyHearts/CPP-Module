/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:21:59 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 12:41:31 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	_name = "John Doe";
}

HumanB::HumanB(std::string name){
	_name = name;
	_weap = nullptr;
}

void	HumanB::setWeapon(Weapon& weap){
	_weap = &weap;
}

void	HumanB::attack(void){
	if (_weap != nullptr)
		std::cout << _name << " attacks with their " << (*_weap).getType() << std::endl;
	else
		std::cout << _name << " has no weapon." << std::endl;
}