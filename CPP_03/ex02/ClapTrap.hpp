/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:55:33 by jyim              #+#    #+#             */
/*   Updated: 2023/07/15 18:03:56 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	//ClapTrap(unsigned int hp);
	//ClapTrap(std::string name, unsigned int hp);
	ClapTrap(ClapTrap const &other);
	ClapTrap& operator=(const ClapTrap& other);
	friend	std::ostream& operator<<(std::ostream& os, const ClapTrap& other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);	
	void beRepaired(unsigned int amount);
	protected:
	std::string _name;
	int _hp;
	int _ep;
	int _dp;
};