/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 16:58:45 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//#include <exception>
#include <iostream>


typedef struct s_data
{
	int x;
	char y;
	std::string str;
}				Data;

class Serializer
{
	public:
	Serializer();
	Serializer(std::string input);
	Serializer(Serializer const &other);
	Serializer& operator=(const Serializer& other);
	//friend std::ostream& operator<<(std::ostream& os, const Serializer& other);
	~Serializer();

	//Convertion
	//It takes a pointer and converts it to the unsigned integer type uintptr_t.
	uintptr_t serialize(Data* ptr);
	//It takes an unsigned integer parameter and converts it to a pointer to Data.
	Data* deserialize(uintptr_t raw);

	private:
	std::string _input;
};
