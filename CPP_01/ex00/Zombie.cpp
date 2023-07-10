/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:25:04 by jyim              #+#    #+#             */
/*   Updated: 2023/07/03 11:43:48 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string _name ){
	name = _name;
}

void Zombie::announce(void){
	std::string ZombieSays(": BraiiiiiiinnnzzzZ...");
	std::cout << this->name << ZombieSays << std::endl;
}
