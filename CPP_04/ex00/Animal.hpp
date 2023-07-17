/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:54:58 by jyim              #+#    #+#             */
/*   Updated: 2023/07/17 17:24:27 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#pragma once

class Animal
{
	protected:
	std::string m_type;
	public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	std::string getType(void) const { return m_type; }
	virtual void makeSound(void) const;
};

class Dog : public Animal
{
	public:
	Dog();
	Dog(Dog const &other);
	Dog& operator=(const Dog& other);
	~Dog();
	void makeSound(void) const;
};

class Cat : public Animal
{
	public:
	Cat();
	Cat(Cat const &other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound(void) const;
};


class WrongAnimal
{
	protected:
	std::string m_type;
	public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal& operator=(const WrongAnimal& other);
	virtual ~WrongAnimal();
	std::string getType(void) const { return m_type; }
	void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();
	void makeSound(void) const;
};