/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:38:27 by jyim              #+#    #+#             */
/*   Updated: 2023/10/16 14:50:32 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

int main( void ) {
	Point a(0.0f, 0.0f);
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);

	Point in(10.0f, 15.0f);
	Point out(10.0f, 30.0f);

	std::cout << "================================" << std::endl;
	if (bsp(a, b, c, in))
		std::cout << "Point inside triangle" << std::endl;
	else
		std::cout << "Point outside triangle" << std::endl;
	std::cout << "================================" << std::endl;
	return 0;
}