/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/13 16:16:04 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Param : public std::exception
{
public:
	Param(const std::string& msg) throw() : _msg(msg) {}
	~Param() throw() {}
	virtual const char* what() const throw() {return _msg.c_str() ; }
private:
	std::string _msg;
};


// template <Class T>
class Span
{
	public:
	Span() {throw Param("Insert size of container");}
	Span(size_t N) : _size(N) {}
	void addNumber (int num);
	int shortestSpan(void);
	int longestSpan(void);
	void fillNum(void);	
	void printContents(void);
	private:
	size_t _size;
	std::vector<int> list;
};