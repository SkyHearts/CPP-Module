/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 16:49:00 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//Constructor and destructor
Serializer::Serializer(){
	std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(std::string input) : _input(input){
	std::cout << "Input constructor called" << std::endl;
}

Serializer::~Serializer(){
	std::cout << "Destructor called" << std::endl;
}

//Copy Constructor
Serializer::Serializer(Serializer const &other) : _input(other._input){
	std::cout << "Serializer copy created" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& other){
	if (this == &other)
		return (*this);
	this->_input = other._input;
	std::cout << "Serializer operator copy created" << std::endl;
	return *this;
}

//std::ostream& operator<<(std::ostream& os, const Serializer& other){
//	os << other._name << ", Serializer grade " << other._grade << ".";
//	return os;
//}

uintptr_t Serializer::serialize(Data* ptr){
	uintptr_t pointer = reinterpret_cast<uintptr_t>(ptr);
	return pointer;
}

Data* Serializer::deserialize(uintptr_t raw){
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}
