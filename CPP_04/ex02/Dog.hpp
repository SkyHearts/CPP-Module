/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:12:22 by jyim              #+#    #+#             */
/*   Updated: 2023/10/23 10:31:09 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef _LIBRARY_42
#define _LIBRARY_42
#include <iostream>
#include <string>
#include "Animal.hpp"
// #include "Brain.hpp"
#endif

class Dog : public Animal
{
	private:
	Brain* _Brain;
	public:
	Dog();
	Dog(Dog const &other);
	Dog& operator=(const Dog& other);
	~Dog();
	void makeSound(void) const;
	Brain* getBrain(void) const { return _Brain; }
};