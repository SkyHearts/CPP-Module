/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:12:28 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 09:49:08 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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