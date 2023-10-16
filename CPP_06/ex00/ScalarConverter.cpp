/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 15:15:26 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool checkAlpha(const std::string &str){
    bool retVal = true;
	const char *tmp_str = str.c_str();
	int size = strlen(tmp_str);
    for (int i = 0; i < size; i++){
        if (isalpha(tmp_str[i])){
            retVal = false;
			throw(std::invalid_argument("Number only"));
            break;
        }
    }
    return retVal;
}

int decimalCount(std::string input){
	if (std::count(input.begin(), input.end(), '.') == 1 && input.find('.') != std::string::npos){
		int length = input.length();
		int i = input.find('.') + 1;
		int count = 0;
		//std::cout << "position '.' : " << i << std::endl;
		//std::cout << "length : " << length << std::endl;
		for (; i < length; ++i)
			count++;
		return (count);
	}
	return (0);
}

//Constructor and destructor
ScalarConverter::ScalarConverter(){
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string input) : _input(input){
	std::cout << "Input constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Destructor called" << std::endl;
}

//Copy Constructor
ScalarConverter::ScalarConverter(ScalarConverter const &other) : _input(other._input){
	std::cout << "ScalarConverter copy created" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
	if (this == &other)
		return (*this);
	this->_input = other._input;
	std::cout << "ScalarConverter operator copy created" << std::endl;
	return *this;
}

//std::ostream& operator<<(std::ostream& os, const ScalarConverter& other){
//	os << other._name << ", ScalarConverter grade " << other._grade << ".";
//	return os;
//}

void ScalarConverter::printChar(std::string input){
	std::cout << "in printchar" << std::endl;
	try
	{
		if (!input.compare("nan"))
			std::cout << "char: Impossible" << std::endl;
		else if (checkAlpha(input)){
			double d = std::stod(input);
			char c = static_cast<char> (d);
			if (c >= 32 && c <= 126 && input.find('.') != input.length() - 1 && d == c){
				//std::cout << c << std::endl;
				std::cout << "char: '";
				//std::putchar(c);
				std::cout << c;
				std::cout << "'" << std::endl;
			}
			else
				std::cout << "char: Non displayable" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		 std::cerr << "char:" << e.what() << std::endl;
	}	
}

void ScalarConverter::printInt(std::string input){
	try
	{
		if (!input.compare("nan"))
			std::cout << "int : Impossible" << std::endl;
		else if (checkAlpha(input)){
			if (input.find('.') != input.length() - 1){
				int c = static_cast<int>(std::stod(input));
				std::cout << "int : " << c << std::endl;
			}
			else
				std::cout << "int: Non displayable" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		 std::cerr << "int :" << e.what() << std::endl;
	}	
}

void ScalarConverter::printFloat(std::string input){
	try
	{
		if (!input.compare("nan"))
			std::cout << "float : Impossible" << std::endl;
		else if (checkAlpha(input)){
			if (input.find('.') != input.length() - 1){
				float c = static_cast<float>(std::stod(input));
				//double d = std::stod(input);
				//float c = static_cast<float>(d);
				std::cout << "float : " << std::fixed << c << "f" << std::endl;
			}
			else
				std::cout << "float: Non displayable" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		 std::cerr << "float :" << e.what() << std::endl;
	}	
}

void ScalarConverter::printDouble(std::string input){
	try
	{
		if (!input.compare("nan"))
			std::cout << "double : Impossible" << std::endl;
		else if (checkAlpha(input)){
			if (input.find('.') != input.length() - 1){
				double c = std::stod(input);
				std::cout << "double : " << std::fixed << c << std::endl;
			}
			else
				std::cout << "double: Non displayable" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		 std::cerr << "double :" << e.what() << std::endl;
	}	
}

void ScalarConverter::printConversion(void){
	//std::cout.precision(10);
	int i = decimalCount(this->_input);
	//std::cout << "Decimal Count: " << i << std::endl;
	std::cout.precision(std::max(i , 1));
	ScalarConverter::printChar(this->_input);
	ScalarConverter::printInt(this->_input);
	ScalarConverter::printFloat(this->_input);
	ScalarConverter::printDouble(this->_input);
}