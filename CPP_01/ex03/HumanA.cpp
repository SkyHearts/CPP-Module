/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:27:01 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:13:35 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
	_name = "John Doe";
}

HumanA::HumanA(std::string name, Weapon& weap){
	_name = name;
	_weap = &weap;
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << (*_weap).getType() << std::endl;
}