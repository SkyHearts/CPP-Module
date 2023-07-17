/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:43:13 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:49:10 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &other){
	*this = other;
	std::cout << "Brain copy created" << std::endl;
}

Brain& Brain::operator=(const Brain& other){
	if (this == &other)
		return (*this);
	this->ideas = other.ideas;
	std::cout << "Brain operator copy created" << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << " type Brain destructor called" << std::endl;
}