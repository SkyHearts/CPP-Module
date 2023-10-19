/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:52:49 by jyim              #+#    #+#             */
/*   Updated: 2023/10/19 19:05:50 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->m_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &other){
	*this = other;
	std::cout << "Cat copy created" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this == &other)
		return (*this);
	this->m_type = other.m_type;
	std::cout << "Cat operator copy created" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << this->m_type << " type Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "*Meow* *Meow* *Meow*" << std::endl;
}