/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:48:51 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:42:51 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog(){
	this->m_type = "Dog";
	this->_Brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &other){
	*this = other;
	std::cout << "Dog copy created" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this == &other)
		return (*this);
	this->m_type = other.m_type;
	this->_Brain = other._Brain;
	std::cout << "Dog operator copy created" << std::endl;
	return *this;
}

Dog::~Dog(){
	delete[] this->_Brain;
	std::cout << this->m_type << " type Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "*Bark* *Bark* *Bark*" << std::endl;
}