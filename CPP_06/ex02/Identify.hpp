/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/09/13 13:01:18 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//#include <exception>
#include <iostream>

class Base
{
	public:
	Base();
	virtual ~Base();
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);


	private:
	std::string _input;
};

class A : public Base
{
	public:
	A();
	~A();
};

class B : public Base
{
	public:
	B();
	~B();
};

class C : public Base
{
	public:
	C();
	~C();
};