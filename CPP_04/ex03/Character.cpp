/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:39:08 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 16:10:17 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Character.hpp"
#include "Header.hpp"

Character::Character() : _name("Anonymous") {
	std::cout << "Default Character Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->slot[i] = nullptr;
	for (int i = 0; i < 100; i++)
		this->inventory[i] = nullptr;
}

Character::Character(std::string const & name) : _name(name) {
	std::cout << "String Character Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->slot[i] = nullptr;
	for (int i = 0; i < 100; i++)
		this->inventory[i] = nullptr;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->slot[i] != nullptr){
			delete this->slot[i];
			this->slot[i] = nullptr;
		}
	for (int i = 0; i < 100; i++)
		if (this->inventory[i] != nullptr)
			delete this->inventory[i];
	std::cout << "String Character Destructor called" << std::endl;
}	

Character::Character(Character const &other) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Character& Character::operator=(const Character& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	std::cout << "Here" << std::endl;
	this->_name = other.getName();
	std::cout << "Here" << std::endl;
	for (int i = 0; i < 4; i++){
		if (other.slot[i] != nullptr){
			std::cout << "Here1" << std::endl;
			this->slot[i] = other.slot[i]->clone();
		}
		else
			this->slot[i] = nullptr;
	}
	for (int i = 0; i < 100; i++){
		if (other.inventory[i] != nullptr) {
			std::cout << "Here2" << std::endl;
			this->inventory[i] = other.inventory[i]->clone();
		}
		else
			this->inventory[i] = nullptr;
	}
	return *this;
}

void Character::equip(AMateria* m) {
	int i = 0;
	if (m == nullptr){
		std::cout << "Unknown materia, equip failed" << std::endl;
		return ;
	}
	for (; i < 4; i++)
		if (this->slot[i] == nullptr) {
			this->slot[i] = m;
			break ;
		}
	if (i == 4)
		std::cout << "Slots are full, equip failed" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		std::cout << "out of range" << std::endl;	
	else if (this->slot[idx] != nullptr) {
		AMateria *tmp = this->slot[idx];
		int i = 0;
		for (; i < 100; i++){
			if (this->inventory[i] == nullptr) {
				this->inventory[i] = tmp;
				break ;
			}
		}
		if (i == 100)
			std::cout << "Inventory is full, unequip failed" << std::endl;
		else
		{
			std::cout << "Unequiped " << this->slot[idx]->getType() << " Materia" << std::endl;
			this->slot[idx] = nullptr;
		}
	}
	else {
		std::cout << "Slots is empty, nothing to unequip." << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
		std::cout << "Incorrect Slot range." << std::endl;
	else if (this->slot[idx] == nullptr)
		std::cout << "Slots is empty, nothing to use." << std::endl;
	else
		slot[idx]->use(target);
}
