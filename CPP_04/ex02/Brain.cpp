/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:43:13 by jyim              #+#    #+#             */
/*   Updated: 2023/07/18 11:33:14 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Eureka! I have a great idea!";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &other){
	*this = other;
	//for (int i = 0; i < 100; i++)
	//	this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy created" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
	if (this == &other)
		return (*this);
	std::cout << "Brain operator copy created" << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(int i, std::string str){
	this->ideas[i] = str;
}