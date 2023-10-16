/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:14 by jyim              #+#    #+#             */
/*   Updated: 2023/10/13 16:49:44 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap& operator=(const DiamondTrap& other);
	friend	std::ostream& operator<<(std::ostream& os, const DiamondTrap& other);
    void attack(const std::string& target);
    int getScavTrapEP() const { return ScavTrap::_ep; }
	~DiamondTrap();
	void whoAmI(void);
	private:
	std::string _name;
    // FragTrap fragTrap;
    // ScavTrap scavTrap;
};