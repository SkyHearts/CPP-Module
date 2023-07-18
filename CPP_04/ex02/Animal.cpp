/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:01:32 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:06:08 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : m_type("Unknown"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : m_type(type){
	std::cout << type << " type Animal string constructor called" << std::endl;
}

Animal::Animal(Animal const &other){
	*this = other;
	std::cout << "Animal copy created" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this == &other)
		return (*this);
	this->m_type = other.m_type;
	std::cout << "Animal operator copy created" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << this->m_type << " type Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const{
	std::cout << "*Unknown animal sound in the distance*" << std::endl;
}