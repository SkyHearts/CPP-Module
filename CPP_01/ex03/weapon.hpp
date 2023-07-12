/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:12:16 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:11:29 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#pragma once

class Weapon
{
	public:
	Weapon();
	Weapon(std::string weapon);
	void setType(std::string weapon);
	std::string getType() const {return type;}
	private:
	std::string type;
};