/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:59:50 by jyim              #+#    #+#             */
/*   Updated: 2023/10/26 12:44:04 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #include <string>
// #include <iostream>
// #include "AMateria.hpp"

// #ifndef MATERIA_LIB
// #define MATERIA_LIB

// # include "AMateria.hpp"

// #endif

// class AMateria;

// class IMateriaSource
// {
// 	public:
// 	virtual ~IMateriaSource() {}
// 	virtual void learnMateria(AMateria*) = 0;
// 	virtual AMateria* createMateria(std::string const & type) = 0;
// };

#include "Header.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	AMateria* mSlot[4];
	public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};