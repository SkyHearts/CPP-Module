/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/11/01 14:32:56 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
	try
	{
		Bureaucrat a("Yahoo", 10);
		std::cout << a << std::endl;
		Bureaucrat b(a);
		std::cout << b << std::endl;
		//Bureaucrat c = b;
		//std::cout << "Bureaucrat " << c.getName() << " has a grade of " << c.getGrade() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}