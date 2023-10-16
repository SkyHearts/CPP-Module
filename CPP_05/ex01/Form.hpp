/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:00:58 by jyim              #+#    #+#             */
/*   Updated: 2023/08/29 15:07:39 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(Form const &other);
	~Form();
	Form& operator=(const Form& other);
	friend std::ostream& operator<<(std::ostream& os, const Form& other);
	
	//Get func
	bool isSigned(void) const{return _signature;}
	int getSignGrade(void) const{return _signGrade;}
	int getExecGrade(void) const{return _execGrade;}
	std::string getName(void) const{return _name;}

	//Set func
	void setSigned(void) ;
	
	//Sign func
	void beSigned(Bureaucrat const &person);
	
	//Exception throwing
	void GradeTooHighException(void);
	void GradeTooLowException(void); 
	
	private:
	const std::string _name;
	bool _signature;
	const int _signGrade;
	const int _execGrade;
};