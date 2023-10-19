/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:25:59 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 10:03:39 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/* Zombie class defination */
class Zombie
{
private:
	std::string name;
public:
	/* Constructor */
	Zombie();
	/* Destructor */
	~Zombie();
	void announce( void );
	/* Helps outside function to insert name as they have no access to private class */
	void setName(std::string _name);
};

/* Function outside of zombie class  */
Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
void 	randomChump(std::string name);

#endif