/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 09:14:04 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <iterator>
#include <stack>
#include <cstdlib>

// template<typename T>
class Param : public std::exception
{
public:
	Param(const std::string& msg) throw() : _msg(msg) {}
	~Param() throw() {}
	virtual const char* what() const throw() {return _msg.c_str() ; }
private:
	std::string _msg;
};


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>(){}
	MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	MutantStack& operator=(const MutantStack& other) {
		if (this != &other) {
			std::stack<T>::operator=(other);
		}
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
	// template<typename iterator>
	// iterator MutantStack<T>::begin() {return this->c.begin();}

	// template<typename iterator>
	// iterator MutantStack<T>::end() {return this->c.end();}

	// iterator end() {return this->c;}
};