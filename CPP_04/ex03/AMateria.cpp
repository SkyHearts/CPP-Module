/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:49:50 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 13:18:38 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AMateria.hpp"
#include "Header.hpp"


AMateria::AMateria() {
	std::cout << "Default AMateria Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "String AMateria Constructor" << std::endl;
	if (type == "ice")
		this->_type = "ice";
	else if (type == "cure")
		this->_type = "cure";
}

AMateria::~AMateria() {
	std::cout << "AMateria " << this->_type << " Destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &other) {
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this == &other)
		return *this;
	this->_type = other.getType();
	return *this;
}

// AMateria* AMateria::clone() const {
// 	return (new AMateria(*this));
// }

void AMateria::use(ICharacter& target) {
	std::cout << "Using unknown materia on " << target.getName() << std::endl;
}