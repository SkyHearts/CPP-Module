/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:33:52 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:20:11 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : _name("Blank"), _signature(false), _signGrade(150), _execGrade(150){
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signature(false), _signGrade(signGrade), _execGrade(execGrade){
	std::cout << "Form fill constructor called" << std::endl;
	if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
		Form::GradeTooLowException();
	if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
		Form::GradeTooHighException();
}

Form::~Form(){
	std::cout << "Form Destructor called" << std::endl;
}

//Copy Constructor
Form::Form(Form const &other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _signature(other._signature){
	//*this = other;
	std::cout << "Form copy created" << std::endl;
}

Form& Form::operator=(const Form& other){
	if (this == &other)
		return (*this);
	this->_signature = other._signature;
	std::cout << "Form operator copy created" << std::endl;
	return *this;
}

//Exeception
void Form::GradeTooHighException(void){
	throw(CusException("Grade is too high!"));
}

void Form::GradeTooLowException(void){
	throw(CusException("Grade is too low!"));
}

//Set func
void Form::setSigned(void) {
	this->_signature = true;
}

std::ostream& operator<<(std::ostream& os, const Form& other){
	os << other._name << " form, with signing grade of " << other.getSignGrade() << " and execution grade of " << other.getExecGrade();
	if (other.isSigned())
		os << " is already signed.";
	else
		os << " is not yet sign.";
	return os;
}

//Sign func
void Form::beSigned(Bureaucrat const &person){
	if (!(this->isSigned())){
		if (person.getGrade() <= this->getSignGrade()){
			std::cout << person.getName() << " signed " << this->getName() << "." << std::endl;
			this->_signature = true;
		}
		else{
			std::cout << person.getName() << " couldn't sign " << this->getName() << " because of insufficient grade." << std::endl;
			Form::GradeTooLowException();
		}
	}
	else
		std::cout << this->getName() << " form is already signed." << std::endl;
}
