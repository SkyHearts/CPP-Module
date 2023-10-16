/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:40:57 by jyim              #+#    #+#             */
/*   Updated: 2023/10/09 17:02:50 by jyim             ###   ########.fr       */
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
	friend	std::ostream& operator<<(std::ostream& os, const FragTrap& other);
	~FragTrap();
    int getFragTrapHP() const { return FragTrap::_fragHP; }
    int getFragTrapDP() const { return FragTrap::_fragDP; }
	void highFivesGuys(void);
	private:
	int _fragHP;
	int _fragDP;
};