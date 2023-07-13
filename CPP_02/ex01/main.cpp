/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:38:27 by jyim              #+#    #+#             */
/*   Updated: 2023/07/13 15:07:53 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>
/* 
1.Default constructor called
2.Copy constructor called
3.Copy assignment operator called // <-- This line may be missing depending on your implementation
4.getRawBits member function called
5.Default constructor called
6.Copy assignment operator called
7.getRawBits member function called
8.getRawBits member function called
0
9.getRawBits member function called
0
10.getRawBits member function called
0
11.Destructor called
12.Destructor called
13.Destructor called
 */
int main( void ) {
Fixed a; //1
Fixed b( a ); //2, 3, 4
Fixed c; //5
c = b; //6
std::cout << a.getRawBits() << std::endl; //8
std::cout << b.getRawBits() << std::endl; //9
std::cout << c.getRawBits() << std::endl; //10
return 0;
} //11,12,13