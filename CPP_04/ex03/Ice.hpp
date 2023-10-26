/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:42:45 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 12:44:56 by jyim             ###   ########.fr       */
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
// # include "AMateria.hpp"
// class AMateria;

#include "Header.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		// Ice(std::string const & type);
		Ice(Ice const &other);
		~Ice(void);
		Ice& operator=(const Ice& other);
		AMateria* clone () const;
		void use(ICharacter& target);
};
