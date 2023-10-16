/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 15:46:31 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void){
	try
	{
		Bureaucrat a("Corrupt official", 21);
		ShrubberyCreationForm Bonsai("Bonsai");
		std::cout << a << std::endl;
		Form form("Corrupt contract", 20, 10);
		std::cout << form << std::endl;
		//a.signForm(form);
		form.beSigned(a);
		std::cout << form << std::endl;
	}
	catch(Exception& e)
	{
		std::cerr << e.getMessage() << std::endl;
	}
	
}