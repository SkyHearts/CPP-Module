/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 14:04:53 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

// class Exception
// {
// public:
//    Exception(const std::string& msg) : _msg(msg) {}
//   ~Exception() {}

//    std::string getMessage() const {return(_msg);}
// private:
//    std::string _msg;
// };

class CusException : public std::exception
{
public:
	CusException(const std::string& msg) throw() : _msg(msg) {}
	~CusException() throw() {}
	virtual const char* what() const throw() {return _msg.c_str() ; }
private:
	std::string _msg;
};

class Bureaucrat
{
	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat& operator=(const Bureaucrat& other);
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);
	~Bureaucrat();
	std::string getName(void) {return _name;}
	int getGrade(void) {return _grade;}
	
	//Exception throwing
	void GradeTooHighException(void);
	void GradeTooLowException(void); 
	
	private:
	const std::string _name;
	int _grade;
};
