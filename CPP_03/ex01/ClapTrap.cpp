/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:16 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 18:03:20 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10){
	this->_name = "ClapTrap";
	this->_ep = 10;
	this->_dp = 0;
	std::cout << "ClapTrap created" << std::endl;
}

//ClapTrap::ClapTrap(unsigned int hp) : _hp(hp){
//	this->_name = "ClapTrap";
//	this->_ep = 10;
//	this->_dp = 0;
//	std::cout << "ClapTrap created" << std::endl;
//}

ClapTrap::ClapTrap(std::string name) : _hp(10){
	this->_name = name;
	this->_ep = 10;
	this->_dp = 0;
	std::cout << "ClapTrap created" << std::endl;
}

//ClapTrap::ClapTrap(std::string name, unsigned int hp){
//	this->_name = name;
//	this->_hp = hp;
//	this->_ep = 10;
//	this->_dp = 0;
//	std::cout << "ClapTrap created" << std::endl;
//}

ClapTrap::ClapTrap(ClapTrap const &other){
	*this = other;
	std::cout << "ClapTrap copy created" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_dp = other._ep;
	std::cout << "ClapTrap operator copy created" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& other){
	os << "ClapTrap " << other._name << " currently has " << other._hp << " HP, and " << other._ep << " EP left!";
	return os;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " despawned!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->_ep > 0){
		this->_ep -= 1;
		std::cout << "ClapTrap " << this->_name << " attack " << target << " causing ";
		std::cout << this->_dp << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " ran out of EP!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is already destroyed!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " gets attack for " << amount << " hitpoints" << std::endl;
		this->_hp -= amount;
		if (this->_hp <= 0)
			std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_ep > 0){
		this->_ep -= 1;
		std::cout << "ClapTrap " << this->_name << " repair itself for " << amount;
		std::cout << " of hit points!" << std::endl;
		this->_hp += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " ran out of EP!" << std::endl;
}