/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:28:52 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 16:51:51 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point() : _x(0), _y(0){
	std::cout << "Point initialize x = 0, y = 0" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y){
	std::cout << "Point initialize x = " << x << ", y = " << y << std::endl;
}

Point::Point(Point const &other){
	*this = other;
}

Point& Point::operator=(const Point& other){
	this->_x = other._x;
	this->_y = other._y;
	return *this;
}

Point::~Point(){
	//std::cout << "Point x = " << _x << ", y = " << _y << " destroyed" << std::endl;
}
