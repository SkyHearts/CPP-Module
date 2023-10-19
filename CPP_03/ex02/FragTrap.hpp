/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:18:37 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	//FragTrap::FragTrap(std::string name, unsigned int hp);
	~FragTrap();
	void attack(const std::string& target);
	//void takeDamage(unsigned int amount);	
	//void beRepaired(unsigned int amount);
	void highFivesGuys(void);
	private:
	//std::string _name;
	//int _hp;
	//int _ep;
	//int _dp;
};
std::ostream& operator<<(std::ostream& os, const FragTrap& other);