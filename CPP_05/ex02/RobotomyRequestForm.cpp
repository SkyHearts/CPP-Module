/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:15:49 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:47:37 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Rando", 72, 45) ,_target("Rando"){
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  AForm(target, 72, 45) ,_target(target){
	std::cout << "RobotomyRequestForm fill constructor called" << std::endl;
	if (this->getSignGrade() > 150)
		RobotomyRequestForm::GradeTooLowException();
	if (this->getSignGrade() < 1)
		RobotomyRequestForm::GradeTooHighException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequest Form Destructor called" << std::endl;
}

//Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()){
	//*this = other;
	std::cout << "RobotomyRequestForm copy created" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	//if (this == &other)
	//	return (*this);
	std::cout << "RobotomyRequestForm operator copy created" << std::endl;
	return *this;
}
void robotomize(std::string target){
	srand(time(NULL));
	bool tf =  rand() % 2;
	std::cout << "*Drilling noise*" << std::endl;
	if (tf)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomy has failed." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw(CusException("Form not signed"));
	if (executor.getGrade() > this->getExecGrade())
		AForm::GradeTooLowException();
	robotomize(this->_target);
}