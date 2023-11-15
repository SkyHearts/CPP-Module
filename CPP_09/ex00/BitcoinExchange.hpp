/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:49:06 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 12:03:28 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma oce

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
#include <time.h>

class BitcoinExchange
{
	private:
		std::map<long, float> _ExchangeRate;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		void ParseExchangeRate(char const *path);
		void PrintValue(char const *path);
	
};