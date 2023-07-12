/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:22:55 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:30:47 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "weapon.hpp"

#pragma once

class HumanB
{
	public:
	HumanB();
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon& weap);
	
	private:
	std::string _name;
	Weapon* _weap;
};