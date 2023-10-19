/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:25:04 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 09:53:32 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Default Constructor" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string _name ){
	name = _name;
}

void Zombie::announce(void){
	std::string ZombieSays(": BraiiiiiiinnnzzzZ...");
	std::cout << this->name << ZombieSays << std::endl;
}
