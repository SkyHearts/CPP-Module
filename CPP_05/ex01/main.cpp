/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 15:23:13 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	// {	
	// 	// TEST sign form functions
	// 	try
	// 	{
	// 		Bureaucrat a("Corrupt official", 15);
	// 		std::cout << a << std::endl;
	// 		Form form("Corrupt contract", 20, 10);
	// 		std::cout << form << std::endl;
	// 		a.signForm(form);
	// 		form.beSigned(a);
	// 		std::cout << form << std::endl;
	// 	}
	// 	catch(std::exception & e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	{	
		// Test form createion
		try
		{
			Bureaucrat a("Corrupt official", 30);
			std::cout << a << std::endl;
			Form form("Corrupt contract", 20, 10);
			std::cout << form << std::endl;
			// a.signForm(form);
			// form.beSigned(a);

		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
}