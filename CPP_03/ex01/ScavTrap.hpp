/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 16:35:29 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	//ScavTrap::ScavTrap(std::string name, unsigned int hp);
	~ScavTrap();
	void attack(const std::string& target);
	//void takeDamage(unsigned int amount);	
	//void beRepaired(unsigned int amount);
	void guardGate();
	private:
	bool guardMode;
	//std::string _name;
	//int _hp;
	//int _ep;
	//int _dp;
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& other);