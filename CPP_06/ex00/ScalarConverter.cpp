/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:42:26 by jyim              #+#    #+#             */
/*   Updated: 2023/11/03 17:25:01 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool checkAlpha(const std::string &str){
    bool retVal = true;
	const char *tmp_str = str.c_str();
	int size = strlen(tmp_str);
	int count = 0;
	int i = 0;
    for (; i < size; i++){
        if (isalpha(tmp_str[i])){
			count++;
			if (tmp_str[i] != 'f'){
				retVal = false;
				throw(std::invalid_argument("Invalid argument 1"));
				break;
			}
        }
    }
	if (count > 1)
		throw(std::invalid_argument("Invalid argument 2"));
	if (count == 1 && str.find_last_of('f') != size - 1)
		throw(std::invalid_argument("Invalid argument 3"));
    return retVal;
}

int decimalCount(std::string input){
	if (std::count(input.begin(), input.end(), '.') == 1 && input.find('.') != std::string::npos){
		int length = input.length();
		int i = input.find('.') + 1;
		int count = 0;
		const char *tmp_str = input.c_str();
		//std::cout << "position '.' : " << i << std::endl;
		//std::cout << "length : " << length << std::endl;
		for (; i < length; ++i)
			if (!isalpha(tmp_str[i]))
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
	// std::cout << "in printchar" << std::endl;
	try
	{
		if (!input.compare("nan") || !input.compare("nanf"))
			std::cout << "char: Impossible" << std::endl;
		else if (!input.compare("-inf") || !input.compare("-inff"))
			std::cout << "char: Impossible" << std::endl;
		else if (!input.compare("+inf") || !input.compare("+inff"))
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
		if (!input.compare("nan") || !input.compare("nanf"))
			std::cout << "int : Impossible" << std::endl;
		else if (!input.compare("-inf") || !input.compare("-inff"))
			std::cout << "int: Impossible" << std::endl;
		else if (!input.compare("+inf") || !input.compare("+inff"))
			std::cout << "int: Impossible" << std::endl;
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
		if (!input.compare("nan") || !input.compare("nanf"))
			std::cout << "float : nanf" << std::endl;
		else if (!input.compare("-inf") || !input.compare("-inff"))
			std::cout << "float: -inf" << std::endl;
		else if (!input.compare("+inf") || !input.compare("+inff"))
			std::cout << "float: +inf" << std::endl;
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
		if (!input.compare("nan") || !input.compare("nanf"))
			std::cout << "double : nan" << std::endl;
		else if (!input.compare("-inf") || !input.compare("-inff"))
			std::cout << "double: -inff" << std::endl;
		else if (!input.compare("+inf") || !input.compare("+inff"))
			std::cout << "double: +inff" << std::endl;
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