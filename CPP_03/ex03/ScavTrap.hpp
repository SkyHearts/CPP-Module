/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 18:18:36 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	//ScavTrap::ScavTrap(std::string name, unsigned int hp);
	friend	std::ostream& operator<<(std::ostream& os, const ScavTrap& other);
	~ScavTrap();
	//void attack(const std::string& target);
	//void takeDamage(unsigned int amount);	
	//void beRepaired(unsigned int amount);
	void guardGate();
	protected:
	bool guardMode;
	//std::string _name;
	//int _hp;
	//int _ep;
	//int _dp;
};