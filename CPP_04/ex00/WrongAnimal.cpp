/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:17:13 by jyim              #+#    #+#             */
/*   Updated: 2023/10/19 19:06:06 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("Unknown"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type){
	std::cout << type << " type WrongAnimal string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other){
	*this = other;
	std::cout << "WrongAnimal copy created" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if (this == &other)
		return (*this);
	this->m_type = other.m_type;
	std::cout << "WrongAnimal operator copy created" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << this->m_type << " type WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "*Wronggggg animal sound in the distance*" << std::endl;
}