/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/10/11 12:57:05 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <iterator>

class NotFound : public std::exception
{
public:
	NotFound(const std::string& msg) throw() : _msg(msg) {}
	~NotFound() throw() {}
	virtual const char* what() const throw() {return _msg.c_str() ; }
private:
	std::string _msg;
};


template <typename T>
void easyfind(T a, int find) {
	try
	{
		size_t index = 0;
		typedef typename T::iterator Iter;
		for (Iter p = a.begin(); p != a.end(); ++p ){
			if ((*p) == find)
				break ;
		index++;
		}
		if (index == a.size())
			throw NotFound("Number not found");
		else
			std::cout << "Found " << find << " at index: " << index << std::endl;
	}
	catch(NotFound &e)
	{
		std::cerr << e.what() << std::endl;
	}
};
