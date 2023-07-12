/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:21:19 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:12:43 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "weapon.hpp"

#pragma once

class HumanA
{
	public:
	HumanA();
	HumanA(std::string name, Weapon& weapon);
	void attack(void);
	
	private:
	std::string _name;
	Weapon* _weap;
};