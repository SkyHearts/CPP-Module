/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:55:40 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

//Constructor and destructor
Bureaucrat::Bureaucrat() : _name("Mysterious person"), _grade(1){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " Bureaucrat String constructor called" << std::endl;
	if (this->getGrade() > 150)
		Bureaucrat::GradeTooLowException();
	if (this->getGrade() < 1)
		Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
	//this->_name = "Mysterious person";
	std::cout << this->getName() << " Bureaucrat Decstructor called" << std::endl;
}

//Copy Constructor
Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade){
	//*this = other;
	std::cout << "Bureaucrat copy created" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this == &other)
		return (*this);
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
	throw(CusException("Bureaucrat Grade is too high!"));
}

void Bureaucrat::GradeTooLowException(void){
	throw(CusException("Bureaucrat Grade is too low!"));
}

//Sign func
void Bureaucrat::signForm(AForm &form){
	if (!(form.isSigned())){
		if (this->getGrade() <= form.getSignGrade()){
			std::cout << this->getName() << " signed " << form.getName() << "." << std::endl;
			form.setSigned();
		}
		else
			std::cout << this->getName() << " couldn’t sign " << form.getName() << " because of insufficient grade." << std::endl;
	}
	else
		std::cout << form.getName() << " is already signed." << std::endl;
}

//Exec func
void Bureaucrat::executeForm(AForm const & form){
	if (!(form.isSigned())){
		std::cout << form.getName() << " form is not signed." << std::endl;
	}
	else if (this->getGrade() > form.getExecGrade()){
		Bureaucrat::GradeTooLowException();
	}
	else
		form.execute(*this);
}