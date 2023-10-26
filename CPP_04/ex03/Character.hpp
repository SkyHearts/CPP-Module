/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:12:01 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 13:54:01 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef MATERIA_LIB
// #define MATERIA_LIB

#include "Header.hpp"

// #endif

// #ifndef CHARACTER_LIB
// #define CHARACTER_LIB

// # include "ICharacter.hpp"

// #endif

// #include "ICharacter.hpp"
// class AMaterial;

class Character : public ICharacter
{
	private:
		AMateria* slot[4];
		AMateria* inventory[100];
		std::string _name;
	public:
		Character();
		Character(std::string const & name);
		~Character();
		Character(Character const &other);
		Character& operator=(const Character& other);
		
		std::string const & getName() const {return this->_name; }
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
};