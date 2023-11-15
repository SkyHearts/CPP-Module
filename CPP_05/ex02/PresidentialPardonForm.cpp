/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:15:49 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:46:45 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Rando", 25, 5) ,_target("Rando"){
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  AForm(target, 25, 6) ,_target(target){
	std::cout << "PresidentialPardonForm fill constructor called" << std::endl;
	if (this->getSignGrade() > 150)
		PresidentialPardonForm::GradeTooLowException();
	if (this->getSignGrade() < 1)
		PresidentialPardonForm::GradeTooHighException();
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardon Form Destructor called" << std::endl;
}

//Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()){
	//*this = other;
	std::cout << "PresidentialPardonForm copy created" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	//if (this == &other)
	//	return (*this);
	std::cout << "PresidentialPardonForm operator copy created" << std::endl;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw(CusException("Form not signed"));
	if (executor.getGrade() > this->getExecGrade())
		AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by " << executor.getName() << "." << std::endl;
}