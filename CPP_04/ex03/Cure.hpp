/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:45:07 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 12:44:43 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #ifndef MATERIA_LIB
// #define MATERIA_LIB

// # include "AMateria.hpp"

// #endif

// #ifndef CHARACTER_LIB
// #define CHARACTER_LIB

// # include "ICharacter.hpp"

// #endif

// # include "ICharacter.hpp"
// class AMateria;

#include "Header.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		// Cure(std::string const & type);
		Cure(Cure const &other);
		~Cure(void);
		Cure& operator=(const Cure& other);
		AMateria* clone () const;
		void use(ICharacter& target);
};