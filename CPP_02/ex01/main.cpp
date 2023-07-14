/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:38:27 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 10:26:27 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>
/* 
1.Default constructor called
2.Int constructor called
3.Float constructor called
4.Copy constructor called ----------|
5.Copy assignment operator called   |
6.Float constructor called			|
7.Copy assignment operator called	|
8.Destructor called-----------------|
9.a is 1234.43
10.b is 10
11.c is 42.4219
12.d is 10
13.a is 1234 as integer
14.b is 10 as integer
15.c is 42 as integer
16.d is 10 as integer
17.Destructor called
18.Destructor called
19.Destructor called
20.Destructor called
 */
int main( void ) {
	Fixed a; //1
	Fixed const b( 10 ); //2
	Fixed const c( 42.42f ); //3
	Fixed const d( b ); //4
	a = Fixed( 1234.4321f ); //5,6,7,8
	std::cout << "a is " << a << std::endl; //9
	std::cout << "b is " << b << std::endl; //10
	std::cout << "c is " << c << std::endl; //11
	std::cout << "d is " << d << std::endl; //12
	std::cout << "a is " << a.toInt() << " as integer" << std::endl; //13
	std::cout << "b is " << b.toInt() << " as integer" << std::endl; //14
	std::cout << "c is " << c.toInt() << " as integer" << std::endl; //15
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; //16
	return 0; //16,18,18,20
}