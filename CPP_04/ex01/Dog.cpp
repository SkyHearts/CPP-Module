/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:48:51 by jyim              #+#    #+#             */
/*   Updated: 2023/10/23 13:55:14 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->m_type = "Dog";
	this->_Brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &other){
	std::cout << "Dog copy called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	this->m_type = other.m_type;
	if (this != &other){
		this->_Brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_Brain->setIdeas(i, other._Brain->getIdeas()[i]);
	}
	std::cout << "Dog operator copy called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << this->m_type << " type Dog destructor called" << std::endl;
	delete this->_Brain;
}

void Dog::makeSound(void) const{
	std::cout << "*Bark* *Bark* *Bark*" << std::endl;
}