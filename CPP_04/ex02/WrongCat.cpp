/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:15:04 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:15:59 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

WrongCat::WrongCat(){
	this->m_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other){
	*this = other;
	std::cout << "WrongCat copy created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	if (this == &other)
		return (*this);
	this->m_type = other.m_type;
	std::cout << "WrongCat operator copy created" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << this->m_type << " type WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << "*Meow* *Meow* *Meow* *WRONG*" << std::endl;
}