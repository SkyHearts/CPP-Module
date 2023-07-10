/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:12:28 by jyim              #+#    #+#             */
/*   Updated: 2023/07/01 16:20:14 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// void Zombie::randomChump( std::string name ){
// 	Zombie* new_zombie = new Zombie();
// 	new_zombie->name = name;
// 	new_zombie->announce();
// }

void randomChump( std::string name ){
	Zombie *newZombie = new Zombie();
	newZombie->setName(name);
	newZombie->announce();
	delete newZombie;
}

// void randomChump( std::string name ){
// 	Zombie newZombie(name);
// 	newZombie.announce();	
// }