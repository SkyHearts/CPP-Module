/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:49:50 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 13:18:42 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Ice.hpp"
#include "Header.hpp"

Ice::Ice() : AMateria("ice"){
	// this->_type = "ice";
	std::cout << "Default Ice Constructor" << std::endl;
}

// Ice::Ice(std::string const & type) {
// 	if (type == "ice")
// 		this->_type = "ice";
// 	else if (type == "cure")
// 		this->_type = "cure";
// 	else
// 		std::cout << "Unknown Materia" << std::endl;
// }

Ice::~Ice() {
	std::cout << this->_type << " Destructor called" << std::endl;
}

Ice::Ice(Ice const &other) {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	if (this == &other)
		return *this;
	this->_type = other.getType();
	return *this;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}