/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:01:20 by jyim              #+#    #+#             */
/*   Updated: 2023/07/01 16:20:17 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie* Zombie::newZombie( std::string name ){
// 	Zombie *new_zombie = new Zombie();
// 	new_zombie->name = name;
// 	return new_zombie;
// }

// Zombie Zombie::zombieClass(std::string name){
// 	Zombie *newZombie = new Zombie();

// }

Zombie* newZombie(std::string name){
	Zombie *newZombie = new Zombie();
	newZombie->setName(name);
	return (newZombie);
}

// Zombie* newZombie(std::string name){
// 	Zombie newZombie(name);
// 	Zombie *hi = &newZombie;
// 	return (hi);
// }
