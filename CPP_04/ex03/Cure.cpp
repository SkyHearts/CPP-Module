/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:38:42 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 13:04:53 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Cure.hpp"
#include "Header.hpp"

Cure::Cure() {
	this->_type = "cure";
	std::cout << "Default Cure Constructor" << std::endl;
}

// Cure::Cure(std::string const & type) {
// 	if (type == "ice")
// 		this->_type = "ice";
// 	else if (type == "cure")
// 		this->_type = "cure";
// 	else
// 		std::cout << "Unknown Materia" << std::endl;
// }

Cure::~Cure() {
	std::cout << this->_type << " Destructor called" << std::endl;
}

Cure::Cure(Cure const &other) {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	if (this == &other)
		return *this;
	this->_type = other.getType();
	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
}