/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:33:52 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:46:05 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _name("Blank"), _signature(false), _signGrade(150), _execGrade(150){
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signature(false), _signGrade(signGrade), _execGrade(execGrade){
	std::cout << "AForm fill constructor called" << std::endl;
	if (this->getSignGrade() > 150)
		AForm::GradeTooLowException();
	if (this->getSignGrade() < 1)
		AForm::GradeTooHighException();
}

AForm::~AForm(){
	std::cout << "AForm Destructor called" << std::endl;
}

//Copy Constructor
AForm::AForm(AForm const &other) : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _signature(other._signature){
	//*this = other;
	std::cout << "AForm copy created" << std::endl;
}

AForm& AForm::operator=(const AForm& other){
	if (this == &other)
		return (*this);
	this->_signature = other._signature;
	std::cout << "AForm operator copy created" << std::endl;
	return *this;
}

//Exeception
void AForm::GradeTooHighException(void) const{
	throw(CusException("Grade is too high!"));
}

void AForm::GradeTooLowException(void) const{
	throw(CusException("Grade is too low!"));
}

//Set func
void AForm::setSigned(void) {
	this->_signature = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& other){
	os << other._name << " form, with signing grade of " << other.getSignGrade() << " and execution grade of " << other.getExecGrade();
	if (other.isSigned())
		os << " is already signed.";
	else
		os << " is not yet sign.";
	return os;
}

//Sign func
void AForm::beSigned(Bureaucrat const &person){
	if (!(this->isSigned())){
		if (person.getGrade() <= this->getSignGrade()){
			std::cout << person.getName() << " signed " << this->getName() << "." << std::endl;
			AForm::setSigned();
		}
		else{
			std::cout << person.getName() << " couldn't sign " << this->getName() << " because of insufficient grade." << std::endl;
			AForm::GradeTooLowException();
		}
	}
	else
		std::cout << this->getName() << " form is already signed." << std::endl;
}
