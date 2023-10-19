/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:24:09 by jyim             ###   ########.fr       */
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
	~ScavTrap();
	void attack(const std::string& target);
    // int getScavTrapEP() const { return _scavEP; }
	void guardGate();
	protected:
	//std::string _name;
	// int _scavEP;
	bool guardMode;
	static int _scavHP;
	static int _scavEP;
	static int _scavDP;
};
std::ostream& operator<<(std::ostream& os, const ScavTrap& other);