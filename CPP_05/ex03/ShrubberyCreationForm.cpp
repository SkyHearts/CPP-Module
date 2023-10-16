/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:15:49 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 16:06:39 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Blank", 145, 137), _target("Blank"){
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :  AForm(target, 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm fill constructor called" << std::endl;
	if (this->getSignGrade() > 150)
		ShrubberyCreationForm::GradeTooLowException();
	if (this->getSignGrade() < 1)
		ShrubberyCreationForm::GradeTooHighException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreation Form Destructor called" << std::endl;
}

//Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), _target(other.getName()){
	//*this = other;
	std::cout << "ShrubberyCreationForm copy created" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	//if (this == &other)
	//	return (*this);
	std::cout << "ShrubberyCreationForm operator copy created" << std::endl;
	return *this;
}

void printshrubbery(std::string target){
	std::ofstream outFile(target + "_shrubbery");
	outFile 
<< "                                                                ░░░░░░░░░░░░        ░░░░░░░░░░░░              \n"
<< "                                                            ░░░░░░░░░░░░░░░░░░░░  ░░▒▒░░▒▒░░░░░░░░            \n"
<< "                                      ░░░░░░░░░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░▒▒░░▒▒▒▒░░▒▒░░          \n"
<< "                                  ░░░░░░░░░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓          \n"
<< "                               ░░░░░░▒▒░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░▒▒░░▒▒░░░░░░░░░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓          \n"
<< "                              ░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓            \n"
<< "                              ▒▒░░▒▒░░▒▒░░▒▒░░░░░░▒▒░░▒▒░░░░▒▒░░░░▒▒▒▒▒▒░░░░▒▒░░▒▒░░▒▒▓▓▓▓▓▓▓▓▓▓░░            \n"
<< "                              ▒▒▓▓▒▒▓▓▒▒▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓  ░░░░░░░░░░░░          \n"
<< "                              ▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒░░▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓░░░░░░▒▒░░▒▒░░░░░░      \n"
<< "                              ▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▒▒░░▒▒░░▒▒░░    \n"
<< "                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▒▒░░▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒░░    \n"
<< "                              ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▓▓▒▒▒▒      \n"
<< "                                  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        ▒▒▒▒▒▒      ▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒      \n"
<< "                                          ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒        ▓▓▒▒▒▒░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓        \n"
<< "                                ░░░░░░░░░░        ▓▓▓▓▓▓░░▓▓▓▓▒▒░░      ░░▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒            \n"
<< "                            ░░░░░░░░░░░░░░░░░░░░░░░░        ▓▓▓▓▒▒░░    ▒▒▓▓▓▓▓▓▓▓                            \n"
<< "                          ▒▒░░▒▒░░░░░░░░░░░░░░▒▒░░░░            ▓▓▒▒░░▒▒▓▓▓▓                                  \n"
<< "                        ░░▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░░░░░          ▓▓▒▒▒▒▒▒      ░░░░░░      ░░░░░░            \n"
<< "                        ▒▒▒▒▓▓▒▒░░▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒░░░░          ▓▓▒▒▓▓▒▒  ░░░░░░░░░░░░░░░░░░░░░░░░░░        \n"
<< "                        ▓▓▓▓▒▒▓▓▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  ░░░░░░  ░░▒▒▓▓░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░▒▒░░      \n"
<< "                        ░░▓▓▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒▓▓▒▒░░▒▒▒▒▒▒▒▒  ▒▒▒▒░░░░░░░░░░▒▒░░░░░░▒▒░░▒▒░░▒▒░░▒▒      \n"
<< "                          ▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒░░▒▒▒▒░░░░░░▒▒      \n"
<< "                            ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒    ▓▓▓▓▓▓▒▒░░▒▒▒▒░░▒▒░░▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▓▓▒▒      \n"
<< "                                    ▓▓▓▓▓▓▓▓▓▓                    ▓▓▓▓░░▓▓▒▒▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▓▓▓▓▓▓▒▒      \n"
<< "                                                                  ░░▒▒░░▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓░░        \n"
<< "                                                                ░░░░░░▒▒▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓            \n"
<< "                                                              ░░░░▒▒▒▒▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░            \n"
<< "                                                      ░░░░░░░░░░▒▒▒▒▓▓▓▓      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                  \n"
<< "                                                ░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                        \n"
<< "                                              ░░░░░░░░▒▒▒▒▓▓▓▓▓▓▓▓▓▓░░                                        \n"
<< "                                            ░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓                                                \n"
<< "                                          ░░░░▒▒▒▒▓▓▓▓▒▒                                                      \n"
<< "                                          ░░░░▒▒▒▒▓▓▓▓                                                        \n"
<< "                                        ░░░░▒▒▒▒▓▓▓▓▒▒▓▓▒▒                                                    \n"
<< "                                      ░░░░░░▒▒▓▓▓▓▒▒▓▓▓▓▒▒▓▓                                                  \n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw(Exception("Form not signed"));
	if (executor.getGrade() > this->getExecGrade())
		AForm::GradeTooLowException();
	printshrubbery(this->getName());
}