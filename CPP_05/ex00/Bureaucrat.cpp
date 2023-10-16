/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/08/29 15:11:42 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructor and destructor
Bureaucrat::Bureaucrat() : _name("Mysterious person"), _grade(1){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " String constructor called" << std::endl;
	if (this->getGrade() > 150)
		Bureaucrat::GradeTooLowException();
	if (this->getGrade() < 1)
		Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " Decstructor called" << std::endl;
}

//Copy Constructor
Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade){
	//*this = other;
	std::cout << "Bureaucrat copy created" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this == &other)
		return (*this);
	//const std::string *tmp = &this->_name;
	this->_grade = other._grade;
	std::cout << "Bureaucrat operator copy created" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other){
	os << other._name << ", bureaucrat grade " << other._grade << ".";
	return os;
}

//Exeception
void Bureaucrat::GradeTooHighException(void){
	throw(Exception("Grade is higher than 1!!!"));
}

void Bureaucrat::GradeTooLowException(void){
	throw(Exception("Grade is lower than 150!!!"));
}
