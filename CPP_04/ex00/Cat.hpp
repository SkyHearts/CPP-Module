/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:13:07 by jyim              #+#    #+#             */
/*   Updated: 2023/10/19 18:14:57 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef _LIBRARY_42
#define _LIBRARY_42
#include <iostream>
#include <string>
#include "Animal.hpp"
#endif

class Cat : public Animal
{
	public:
	Cat();
	Cat(Cat const &other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound(void) const;
};