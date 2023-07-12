/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:55:33 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 12:29:20 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *newZombie = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		newZombie[i].setName(name);
	return newZombie;
}
