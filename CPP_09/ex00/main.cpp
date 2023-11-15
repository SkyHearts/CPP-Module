/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:46:09 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 13:02:34 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		return 0;
	}
	BitcoinExchange Rates;
	try
	{
		Rates.ParseExchangeRate("data.csv");
		Rates.PrintValue(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}