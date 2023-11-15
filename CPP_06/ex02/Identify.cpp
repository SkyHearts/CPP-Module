/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/11/03 17:44:47 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <ctime>

//Constructor and destructor
Base::Base(){
	std::cout << "Base constructor called" << std::endl;
}

Base::~Base(){
	std::cout << "Base Destructor called" << std::endl;
}

A::A(){
	std::cout << "A constructor called" << std::endl;
}

A::~A(){
	std::cout << "A Destructor called" << std::endl;
}

B::B(){
	std::cout << "B constructor called" << std::endl;
}

B::~B(){
	std::cout << "B Destructor called" << std::endl;
}

C::C(){
	std::cout << "C constructor called" << std::endl;
}

C::~C(){
	std::cout << "C Destructor called" << std::endl;
}

Base* Base::generate(void){
	std::time_t localTime = std::time(0);
	std::tm* ltm = std::localtime(&localTime);
	srand(ltm->tm_sec);
	int num = (rand() % 3);
	if (num == 0)
		return (new A);
	else if (num == 1)
		return (new B);
	else if (num == 2)
		return (new C);
	return (nullptr);	
}

void Base::identify(Base* p){
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A!" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B!" << std::endl;
	else
		std::cout << "C!" << std::endl;
}

void Base::identify(Base& p){

	try {
    	A a = dynamic_cast<A&>(p);
		std::cout << "A!" << std::endl;
	}
	catch(const std::bad_cast& e) {
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B!" << std::endl;
		}
		catch(const std::bad_cast& e) {
			std::cout << "C!" << std::endl;
		}
	}
	// if (dynamic_cast<A*>(&p) != nullptr)
	// 	std::cout << "Class is identified as A!" << std::endl;
	// else if (dynamic_cast<B*>(&p) != nullptr)
	// 	std::cout << "Class is identified as B!" << std::endl;
	// else
	// 	std::cout << "Class is identified as C!" << std::endl;
}
