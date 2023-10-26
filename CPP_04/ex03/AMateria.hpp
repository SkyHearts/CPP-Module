/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:45:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 12:47:12 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #include <string>
// #include <iostream>


// #ifndef CHARACTER_LIB
// #define CHARACTER_LIB

// # include "ICharacter.hpp"

// #endif
// class ICharacter;

// # include "ICharacter.hpp"

#include "Header.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria const &other);
		AMateria& operator=(const AMateria& other);
		std::string const & getType() const { return _type; } //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

// class Ice : public AMateria
// {
// 	public:
// 		Ice(std::string const & type);
// 		~Ice(void);
// 		AMateria& clone (void);
// };

// class Cure : public AMateria
// {
// 	public:
// 		Cure(std::string const & type);
// 		~Cure(void);
// 		AMateria& clone (void);
// };