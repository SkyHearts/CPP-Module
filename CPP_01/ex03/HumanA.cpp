/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:27:01 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 12:42:52 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weap) : _weap(weap){
	_name = name;
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << (_weap).getType() << std::endl;
}