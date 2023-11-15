/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/08 10:39:14 by jyim             ###   ########.fr       */
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
	Span();
	Span(size_t N) : _size(N) {}
	Span(const Span& other);
	Span& operator=(const Span& other);
	void addNumber (int num);
	int shortestSpan(void);
	int longestSpan(void);
	void fillNum(void);	
	void printContents(void);
	private:
	size_t _size;
	std::vector<int> list;
};