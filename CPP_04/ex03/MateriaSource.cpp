/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:31:55 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 13:26:19 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "MateriaSource.hpp"
#include "Header.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->mSlot[i] = nullptr;
	}
	std::cout << "Default MateriaSource Constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "Default MateriaSource Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->mSlot[i] != nullptr){
			delete this->mSlot[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	int i = 0;
	for (; i < 4; i++) {
		if (this->mSlot[i] == nullptr){
			this->mSlot[i] = materia;
			return ;
		}
	}
	// if (i == 4){
		std::cout << "Source is full" << std::endl;
		delete materia;
	// }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->mSlot[i] == nullptr)
			continue ;
		if (this->mSlot[i]->getType() == type){
			return this->mSlot[i]->clone();
		}
	}
	std::cout << "Unknown materia, create failed" << std::endl;
	return nullptr;
}