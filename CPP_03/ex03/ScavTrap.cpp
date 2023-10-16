/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:16 by jyim              #+#    #+#             */
/*   Updated: 2023/10/09 17:03:57 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_hp = 100;
	this->_ep = 50;
	this->_dp = 20;
    this->_scavEP = 50;
	this->guardMode = false;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_dp = 20;
    this->_scavEP = 50;
	this->guardMode = false;
	std::cout << "ScavTrap name created" << std::endl;
}

//ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100){
//	this->_name = name;
//	this->_hp = 100;
//	this->_ep = 50;
//	this->_dp = 20;
//	std::cout << "ScavTrap created" << std::endl;
//}

ScavTrap::ScavTrap(ScavTrap const &other){
	*this = other;
	std::cout << "ScavTrap copy created" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& other){
	os << "ScavTrap " << other._name << " currently has " << other._hp << " HP, and " << other._ep << " EP left!";
	return os;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " despawned!" << std::endl;
}

//void ScavTrap::attack(const std::string& target){
//	if (this->_ep > 0){
//		this->_ep -= 1;
//		std::cout << "ScavTrap " << this->_name << " attack " << target << " causing ";
//		std::cout << this->_dp << " points of damage!" << std::endl;
//	}
//	else
//		std::cout << "ScavTrap " << this->_name << " ran out of EP!" << std::endl;
//}

//void ScavTrap::takeDamage(unsigned int amount){
//	if (this->_hp <= 0)
//		std::cout << "ScavTrap " << this->_name << " is already destroyed!" << std::endl;
//	else
//		std::cout << "ScavTrap " << this->_name << " gets attack for " << amount << " hitpoints" << std::endl;
//		this->_hp -= amount;
//		if (this->_hp <= 0)
//			std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
//}

//void ScavTrap::beRepaired(unsigned int amount){
//	if (this->_ep > 0){
//		this->_ep -= 1;
//		std::cout << "ScavTrap " << this->_name << " repair itself for " << amount;
//		std::cout << " of hit points!" << std::endl;
//		this->_hp += amount;
//	}
//	else
//		std::cout << "ScavTrap " << this->_name << " ran out of EP!" << std::endl;
//}

void ScavTrap::guardGate(){
	if (this->guardMode == false){
		this->guardMode = true;
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	}
	else if (this->guardMode == true){
		this->guardMode = false;
		std::cout << "ScavTrap is now in Sentry mode" << std::endl;
	}
}