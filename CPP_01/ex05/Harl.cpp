/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:19:19 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 08:51:00 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level){
	Harl::Function func[4] ={
		{0, "debug", &Harl::debug},
		{1, "info", &Harl::info},
		{2, "warning", &Harl::warning},
		{3, "error", &Harl::error}
	};

	for (int i = 0; i < 4; i++){
		if (level == func[i].level){
			//void (Harl::*function)() = func[i].f;
			//(this->*function)();
			(this->*func[i].f)();
			break ;
		}
	};
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}