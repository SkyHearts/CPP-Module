/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:15:33 by jyim              #+#    #+#             */
/*   Updated: 2023/09/01 15:55:46 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern;
typedef AForm* (Intern::*MemFuncPtr)(const std::string&);

class Intern
{
	private:
	static std::string formType[3];
	static MemFuncPtr createForm[3];
	public:
	Intern();
	~Intern();
	Intern(Intern const &other);
	Intern& operator=(const Intern& other);
	AForm* ShrubberyCreation(const std::string& target) ;
	AForm* RobotomyRequest(const std::string& target) ;
	AForm* PresidentialPardon(const std::string& target) ;
	AForm* makeForm(std::string name, std::string target); 
};