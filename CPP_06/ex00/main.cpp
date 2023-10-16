/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:32 by jyim              #+#    #+#             */
/*   Updated: 2023/09/11 09:48:12 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc == 2){
		std::string input(argv[1]);
		ScalarConverter convert(input);

		convert.printConversion();		
	}
	else {
		std::cout << "Format is ./scalarconverter <input>" << std::endl;
	}
}