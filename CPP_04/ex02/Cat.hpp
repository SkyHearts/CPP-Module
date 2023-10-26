/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:13:07 by jyim              #+#    #+#             */
/*   Updated: 2023/10/23 10:31:14 by jyim             ###   ########.fr       */
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
	private:
	Brain* _Brain;
	public:
	Cat();
	Cat(Cat const &other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound(void) const;
	Brain* getBrain(void) const { return _Brain; }
};