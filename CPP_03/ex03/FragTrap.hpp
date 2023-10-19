/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/18 17:25:18 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	~FragTrap();
	void attack(const std::string& target);
    // int getFragTrapHP() const { return FragTrap::_fragHP; }
    // int getFragTrapDP() const { return FragTrap::_fragDP; }
	void highFivesGuys(void);
	protected:
	static int _fragHP;
	static int _fragDP;
	static int _fragEP;
};
std::ostream& operator<<(std::ostream& os, const FragTrap& other);