/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:52:49 by jyim              #+#    #+#             */
/*   Updated: 2023/07/18 11:37:37 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat(){
	this->m_type = "Cat";
	this->_Brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &other){
	*this = other;
	std::cout << "Cat copy created" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	this->m_type = other.m_type;
	if (this != &other){
		delete this->_Brain;
		this->_Brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_Brain[i].setIdeas(i, other._Brain[i].getIdeas()[i]); 
	}
	std::cout << "Cat operator copy called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << this->m_type << " type Cat destructor called" << std::endl;
	delete this->_Brain;
}

void Cat::makeSound(void) const{
	std::cout << "*Meow* *Meow* *Meow*" << std::endl;
}