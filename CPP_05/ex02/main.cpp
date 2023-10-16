/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/08/30 16:58:05 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	try
	{
		Bureaucrat a("Chris Brown", 1);
		ShrubberyCreationForm Bonsai("Bonsai");
		std::cout << a << std::endl;
		
		std::cout << Bonsai << std::endl;
		a.signForm(Bonsai);
		std::cout << Bonsai << std::endl;
		//Bonsai.execute(a);
		a.executeForm(Bonsai);
		
		RobotomyRequestForm FishSticks("FishStick man");
		std::cout << FishSticks << std::endl;
		a.signForm(FishSticks);
		std::cout << FishSticks << std::endl;
		FishSticks.execute(a);

		PresidentialPardonForm Rihanna("Rihanna");
		std::cout << Rihanna << std::endl;
		a.signForm(Rihanna);
		std::cout << Rihanna << std::endl;
		Rihanna.execute(a);
	}
	catch(Exception& e)
	{
		std::cerr << e.getMessage() << std::endl;
	}
	
}