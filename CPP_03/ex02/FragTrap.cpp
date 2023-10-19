/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:35:33 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:18:30 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "FragTrap";
	this->_hp = 100;
	this->_ep = 100;
	this->_dp = 30;
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_dp = 30;

	std::cout << "FragTrap name created" << std::endl;
}

//FragTrap::FragTrap(std::string name) : ClapTrap(name, 100){
//	this->_name = name;
//	this->_hp = 100;
//	this->_ep = 100;
//	this->_dp = 30;
//	std::cout << "FragTrap created" << std::endl;
//}

FragTrap::FragTrap(FragTrap const &other){
	*this = other;
	std::cout << "FragTrap copy created" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const FragTrap& other){
	os << "FragTrap " << other.getName() << " currently has " << other.getHP() << " HP, and " << other.getEP() << " EP left!";
	return os;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->getName() << " despawned!" << std::endl;
}

void FragTrap::attack(const std::string& target){
	if (this->_ep > 0){
		this->_ep -= 1;
		std::cout << "FragTrap " << this->_name << " attack " << target << " causing ";
		std::cout << this->_dp << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " ran out of EP!" << std::endl;
}

//void FragTrap::takeDamage(unsigned int amount){
//	if (this->_hp <= 0)
//		std::cout << "FragTrap " << this->_name << " is already destroyed!" << std::endl;
//	else
//		std::cout << "FragTrap " << this->_name << " gets attack for " << amount << " hitpoints" << std::endl;
//		this->_hp -= amount;
//		if (this->_hp <= 0)
//			std::cout << "FragTrap " << this->_name << " is destroyed!" << std::endl;
//}

//void FragTrap::beRepaired(unsigned int amount){
//	if (this->_ep > 0){
//		this->_ep -= 1;
//		std::cout << "FragTrap " << this->_name << " repair itself for " << amount;
//		std::cout << " of hit points!" << std::endl;
//		this->_hp += amount;
//	}
//	else
//		std::cout << "FragTrap " << this->_name << " ran out of EP!" << std::endl;
//}

void FragTrap::highFivesGuys(void){
	if (this->_hp > 0)
		std::cout << "FragTrap " << this->_name << " is requesting a highfive." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is dead you sick f***." << std::endl;
}