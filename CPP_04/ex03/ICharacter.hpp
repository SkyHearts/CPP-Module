/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:56:05 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 12:43:58 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #ifndef MATERIA_LIB
// #define MATERIA_LIB

// # include "AMateria.hpp"
// // # include "Ice.hpp"
// // # include "Cure.hpp"

// #endif

// #include <string>
// #include <iostream>

// class AMateria;
// # include "AMateria.hpp"
#include "Header.hpp"

// class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

// class Character : public ICharacter
// {
// 	private:
// 		AMateria* slot[4];
// 		AMateria* inventory[100];
// 		std::string _name;
// 	public:
// 		Character();
// 		Character(std::string const & name);
// 		~Character();
// 		Character(Character const &other);
// 		Character& operator=(const Character& other);
		
// 		std::string const & getName() const {return this->_name; }
// 		void equip(AMateria* m);
// 		void unequip(int idx);
// 		void use(int idx, ICharacter& target);
	
// };