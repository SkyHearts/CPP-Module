/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:31:06 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 15:19:48 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

class ScalarConverter
{
	public:
	ScalarConverter();
	ScalarConverter(std::string input);
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter& operator=(const ScalarConverter& other);
	//friend std::ostream& operator<<(std::ostream& os, const ScalarConverter& other);
	~ScalarConverter();

	//PrintConvertion
	void printChar(std::string input);
	void printInt(std::string input);
	void printFloat(std::string input);
	void printDouble(std::string input);

	//Print all convertion
	void printConversion(void);

	private:
	std::string _input;
};

bool	checkAlpha(const std::string &str);