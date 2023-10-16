/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:00:58 by jyim              #+#    #+#             */
/*   Updated: 2023/08/29 18:13:18 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	public:
	AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(AForm const &other);
	virtual ~AForm();
	AForm& operator=(const AForm& other);
	friend std::ostream& operator<<(std::ostream& os, const AForm& other);
	
	//Get func
	bool isSigned(void) const{return _signature;}
	int getSignGrade(void) const{return _signGrade;}
	int getExecGrade(void) const{return _execGrade;}
	std::string getName(void) const{return _name;}

	//Set func
	void setSigned(void) ;
	
	//Sign func
	void beSigned(Bureaucrat const &person);

	//Exec func
	virtual void execute(Bureaucrat const & executor) const = 0;
	
	//Exception throwing
	void GradeTooHighException(void) const;
	void GradeTooLowException(void) const; 
	
	private:
	const std::string _name;
	bool _signature;
	const int _signGrade;
	const int _execGrade;
};