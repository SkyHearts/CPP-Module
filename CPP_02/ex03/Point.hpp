/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:26:37 by jyim              #+#    #+#             */
/*   Updated: 2023/07/14 16:46:09 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	public:
	Point();
	Point(const float x, const float y);
	Point(Point const &other);
	~Point();
	Point& operator=(const Point& other);
	Fixed getX() { return _x; }
	Fixed getY() { return _y; }
	private:
	Fixed _x;
	Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
//bool bsp( Point& a, Point& b, Point& c, Point& point);