/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:57:17 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:32:19 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->_name = "DiamondTrap";
	// this->_hp = FragTrap::getFragTrapHP();
	// this->_ep = ScavTrap::getScavTrapEP();
	// this->_dp = FragTrap::getFragTrapDP();
    this->_hp = FragTrap::_fragHP;
    this->_ep = ScavTrap::_scavEP;
    this->_dp = FragTrap::_fragDP;
    // std::cout << "hp: " << this->_hp << " ep: " << this->_ep << " dp: " << this->_dp << std::endl;
	std::cout << "DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name){
	this->_name = name + "_clap_name";
    this->_hp = FragTrap::_fragHP;
    this->_ep = ScavTrap::_scavEP;
    this->_dp = FragTrap::_fragDP;
	std::cout << "DiamondTrap created" << std::endl;
}

//DiamondTrap::DiamondTrap(std::string name, unsigned int hp){
//	this->_name = name;
//	this->_hp = hp;
//	this->_ep = 10;
//	this->_dp = 0;
//	std::cout << "DiamondTrap created" << std::endl;
//}

DiamondTrap::DiamondTrap(DiamondTrap const &other){
	*this = other;
	std::cout << "DiamondTrap copy created" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_dp = other._ep;
	std::cout << "DiamondTrap operator copy created" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& other){
	os << "DiamondTrap " << other.getName() << " currently has " << other.getHP() << " HP, and " << other.getEP() << " EP left!";
	return os;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " despawned!" << std::endl;
}

void DiamondTrap::whoAmI(void){
	std::cout << this->_name << " or " << ClapTrap::_name << ".........Who am I." << std::endl;
}