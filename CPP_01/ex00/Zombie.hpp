/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:25:59 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 09:36:43 by jyim             ###   ########.fr       */
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
	Zombie(std::string __name) : name(__name) {}
	void announce( void );
	/* Helps outside function to insert name as thehy have no access to private class */
	void setName(std::string _name);
	/* Destructor */
	~Zombie();
};

/* Function outside of zombie class  */
Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif