/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/09 17:02:06 by jyim             ###   ########.fr       */
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
    int getScavTrapEP() const { return _scavEP; }
	void guardGate();
	protected:
	bool guardMode;
	//std::string _name;
    private:
	int _scavEP;
};