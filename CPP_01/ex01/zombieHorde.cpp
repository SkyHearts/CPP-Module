/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:55:33 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 09:51:38 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		newZombie[i].setName(name + " " + std::to_string(i));
	return newZombie;
}
