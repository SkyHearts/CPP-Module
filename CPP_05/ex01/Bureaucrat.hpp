/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 16:49:26 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Exception {
public:
   Exception(const std::string& msg) : _msg(msg) {}
  ~Exception() {}

   std::string getMessage() const {return(_msg);}
private:
   std::string _msg;
};

class Bureaucrat
{
	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &other);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& other);
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);
	std::string getName(void) {return _name;}

	//Get func
	int getGrade(void) const {return _grade;}
	std::string getName(void) const{return _name;}

	//Sign func
	void signForm(Form &form);
	
	//Exception throwing
	void GradeTooHighException(void);
	void GradeTooLowException(void); 
	
	private:
	const std::string _name;
	int _grade;
};
