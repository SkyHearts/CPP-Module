/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:38:27 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 14:24:13 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>
/* 
1.	0
2.	0.00390625
3.	0.00390625
4.	0.00390625
5.	0.0078125
6.	10.1016
7.	10.1016
 */
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl; //1
	std::cout << ++a << std::endl; //2
	std::cout << a << std::endl; //3
	std::cout << a++ << std::endl; //4
	std::cout << a << std::endl; //5
	std::cout << b << std::endl; //6
	std::cout << Fixed::max( a, b ) << std::endl;

	
	std::cout << "=================Arithmethic Operator==================" << std::endl;
	//Arithmethic Operator
	Fixed c(2.5f);
	Fixed d(2.5f);
	Fixed e = c + d;
	std::cout << "c + d = " << e << std::endl; //5
	Fixed f = e - d;
	std::cout << "e - d = " << f << std::endl; //2.5
	Fixed g = e * c;
	std::cout << "e * c = " << g << std::endl; //12.5
	Fixed h = g / g;
	std::cout << "g / g = " << h << std::endl; //1

	std::cout << "=================Comparison Operator==================" << std::endl;
	//Comparison Operator
	if (h < g)  //h = 1, g = 12.5
		std::cout << h << " is smaller than " << g << std::endl;
	if (g > e)  //g = 12.5 , e = 5
		std::cout << g << " is larger than " << e << std::endl;
	if (c == d) //c = 2.5, d = 2.5
		std::cout << c << " is the same as " << d << std::endl;
	if (c >= d) //c = 2.5, d = 2.5
		std::cout << c << " more than or equal to " << d << std::endl;
	if (g >= d) //g = 12.5, d = 2.5
		std::cout << g << " more than or equal to " << d << std::endl;
	if (c <= d) //c = 2.5, g = 12.5
		std::cout << c << " less than or equal to " << d << std::endl;
	if (d <= g) //d = 2.5, g = 12.5
		std::cout << d << " less than or equal to " << g << std::endl;
	if (d != g) //d = 2.5, g = 12.5
		std::cout << d << " is not equal to " << g << std::endl;
	return 0;
}