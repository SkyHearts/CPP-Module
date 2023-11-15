/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:20:13 by jyim              #+#    #+#             */
/*   Updated: 2023/11/02 13:28:56 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

std::string Intern::formType[3] = {"shruberry creation", "robotomy request", "presidential pardon"};
MemFuncPtr Intern::createForm[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};

Intern::Intern(){
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern& other){
	*this = other;
	std::cout << "AForm copy created" << std::endl;
}

Intern& Intern::operator=(const Intern& other){
	return (*this);
	std::cout << "AForm operator copy created" << std::endl;
}

AForm* Intern::ShrubberyCreation(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::RobotomyRequest(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::PresidentialPardon(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string name, std::string target){
	for (int i = 0; i < 3; i++){
		if (name == formType[i]){
			std::cout << "Intern creates " << name << " form." << std::endl;
			return ((this->*createForm[i])(target));
		}
	}
	throw(CusException("Form type not found"));
}