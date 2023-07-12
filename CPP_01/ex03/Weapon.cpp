/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:16:33 by jyim              #+#    #+#             */
/*   Updated: 2023/07/12 14:12:22 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon(){
	type = "Fist";
}

Weapon::Weapon(std::string weapon){
	type = weapon;
}

void Weapon::setType(std::string weapon){
	type = weapon;
}