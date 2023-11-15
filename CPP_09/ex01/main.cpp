/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:46:09 by jyim              #+#    #+#             */
/*   Updated: 2023/11/10 14:42:17 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return 0;
	}
	RPN calculator;
	calculator.calc(argv[1]);
}