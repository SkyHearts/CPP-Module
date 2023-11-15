/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:28 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 12:29:09 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other){
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){
	if (this == &other)
		return (*this);
	this->_ExchangeRate = other._ExchangeRate;
	return (*this);
}

void BitcoinExchange::ParseExchangeRate(char const *path){
	time_t timeSinceEpoch;
	struct tm tm = {0};
	std::ifstream data;
	data.open(path);
	std::string line;
	std::getline(data, line);
	while(std::getline(data, line)){
		int delim_pos = line.find(",");
		if (strptime(line.substr(0, delim_pos).c_str(), "%Y-%m-%d", &tm)){
			timeSinceEpoch = mktime(&tm);
			_ExchangeRate[timeSinceEpoch] = std::stod(line.substr(delim_pos + 1, line.size()));
		}
	}
	// for (std::map<long, float>::iterator i = ExchangeRate.begin(); i != ExchangeRate.end(); i++) 
    //     std::cout << "|" << i->first << "|" << " \t\t\t" << "|" << i->second << "|" << std::endl; 
	data.close();
}

void BitcoinExchange::PrintValue(char const *path){
	time_t timeSinceEpoch;
	struct tm tm = {0};
	std::ifstream data;
	data.open(path);
	std::string line;
	std::getline(data, line);
	typedef std::map<long, float>::iterator Boundary;
	while(std::getline(data, line)){
		int delim_pos = line.find("|");
		float value = std::stod(line.substr(delim_pos + 1, line.size()));
		std::string date = line.substr(0, delim_pos - 1);
		if (value >= 1000)
			std::cout << "Error: too large a number." << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else {
			if(strptime(date.c_str(), "%Y-%m-%d", &tm)){
				timeSinceEpoch = mktime(&tm);
				if (_ExchangeRate.count(timeSinceEpoch)) {
					std::cout << date << " => " << value << " = " << _ExchangeRate[timeSinceEpoch] * value << std::endl;	
				}
				else {
					Boundary upperBound = _ExchangeRate.upper_bound(timeSinceEpoch);
					Boundary lowerBound = _ExchangeRate.lower_bound(timeSinceEpoch);
					if ((*upperBound).first - timeSinceEpoch < (*lowerBound).first - timeSinceEpoch)
						std::cout << date <<  " => " << value << " = " << (*upperBound).second * value << std::endl;
					else
						std::cout << date <<  " => " << value << " = " << (*lowerBound).second * value << std::endl;
				}
			}
			else
				std::cout << "Error: bad input => " << date << std::endl;
		}
	}
	data.close();
}